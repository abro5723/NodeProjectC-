/*
 * CTECArray.cpp
 *
 *  Created on: Feb 2, 2016
 *      Author: abro5723
 */

#include "CTECArray.h"
#include <iostream>

using namespace std;

template <class Type>
CTECArray<Type>::CTECArray(int size)
{
	this->size = size;
	head = nullptr;

	if(size <= 0)
	{
		cerr << "IMPOSSIBRU!" <<endl;
		return;
	}

	for(int index = 0; index < size; index++)
	{
		if(head != nullptr)
		{
			ArrayNode<Type>
		}
		else
		{

		}
	}
	delete head;
}

template <class Type>
CTECArray<Type>::~CTECArray()
{
	ArrayNode<Type> * deleteMe = head;
	for(int index = 0; index < size; index++)
	{
		if(deleteMe->getNex() != nullptr)
		{
			head = deleteMe->getNext();
			deleteMe->sNext(nullptr);
			delete deleteMe->getNext();
			deleteMe = head;
		}

	}
}

template <class Type>
int CTECArray<Type> :: getSize()
{
	return this->size;
}

template <class Type>
Type CTECArray<Type> :: get(int position)
{
	if(position >= size || position < 0)
	{
		return nullptr;
	}
	else
	{
		ArrayNode<Type> * current = head;
		for(int spot = 0; spot <= position; spot++)
		{
			if(spot !=position)
			{
				current = current->getNext();
			}
			else
			{
				current->setValue();
			}
		}
	}
}

template <class Type>
void CTECArray<Type>:: set(int position, Type value)
{
	if(position <= size|| position <0)
	{
		cerr << "Don't do this!" << endl;
	}
	else
	{

	}

}
