/*
 * CTECArray.cpp
 *
 *  Created on: Feb 2, 2016
 *      Author: abro5723
 */

#include "CTECArray.h"
#include <iostream>
#include <assert.h>

using namespace std;

template <class Type>
CTECArray<Type>::CTECArray(int size)
{
	this->size = size;
	this->head = nullptr;

	assert(size > 0);

	if(size <= 0)
	{
		cerr << "IMPOSSIBRU!" <<endl;
		return;
	}

	for(int index = 0; index < size; index++)
	{
		if(head != nullptr)
		{
			ArrayNode<Type> * nextNode = new ArrayNode<Type>();
			nextNode->setNext(head);
			head = nextNode;

		}
		else
		{
			ArrayNode<Type> * first = new ArrayNode<Type>();
			head = first;
		}
	}
}

template <class Type>
CTECArray<Type>::~CTECArray()
{
	ArrayNode<Type> * deleteMe = head;
	for(int index = 0; index < size; index++)
	{
		if(deleteMe->getNext() != nullptr)
		{
			head = deleteMe->getNext();
			deleteMe->setNext(nullptr);

		}
			delete deleteMe->getNext();
			deleteMe = head;
	}
	delete head;
}

template <class Type>
int CTECArray<Type> :: getSize()
{
	return this->size;
}

template <class Type>
Type CTECArray<Type> :: get(int position)
{
		assert(position < size && position >= 0);

		ArrayNode<Type> * current = head;

		for(int spot = 0; spot <= position; spot++)
		{
			if(spot !=position)
			{
				current = current->getNext();
			}
			else
			{
				return current->getValue();
			}
		}
}

template <class Type>
void CTECArray<Type>:: set(int position, const Type& value)
{
	assert(position <size && position >=0);
	ArrayNode<Type> * current = head;
		for(int spot = 0; spot <= position; spot)
		{
			if(position != spot)
			{
				current = current->getNext();
			}
			else
			{
				current->setValue(value);
			}
		}

}
