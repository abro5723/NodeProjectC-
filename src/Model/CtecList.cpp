/*
 * CtecList.cpp
 *
 *  Created on: Feb 22, 2016
 *      Author: abro5723
 */

#include "CtecList.h"

template <class Type>
CtecList<Type>::CtecList()
{
	this -> size = 0;
	this->head = nullptr;
	this->end = nullptr;


}

template <class Type>
CtecList<Type>::~CtecList()
{
	// TODO Auto-generated destructor stub
}

template <class Type>
Type CtecList<Type> :: removeFromFront()
{
	//Inase we require that which we remove
	Type returnValue;

	assert(size > 0);
	//Find the next spot
	ArrayNode<Type> * newHead = new ArrayNode<Type>();
	newHead = head->getNext();
	//Get what was  the head node!
	returnValue = head->getValue();
	//Remove head
	delete this -> head;
	this->head = newHead;

	return returnValue;
}

template <class Type>
Type CtecList<Type> :: removeFromEnd()
{

}
