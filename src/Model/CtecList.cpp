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
	ArrayNode<Type> * newHead = new ArrayNode<Type>();
	newHead = head->getNext();
	delete this -> head;
	this->head = newHead;
}

template <class Type>
Type CtecList<Type> :: removeFromEnd()
{

}
