/*
 * Node.h
 *
 *  Created on: Jan 27, 2016
 *      Author: abro5723
 */

#ifndef MODEL_NODE_H_
#define MODEL_NODE_H_

template <class Type>
class Node
{
private:
	Type value;	//Container for the value of a stored node
	Node * pointers;	//Pointer to the array of Nodes that are linked to this Node.
public:
	Node();
	virtual ~Node();
	Type getValue();
	Node * getPointers();
	Node(Type value);
	void setValue(Type value);

};

#endif /* MODEL_NODE_H_ */
