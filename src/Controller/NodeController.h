/*
 * NodeController.h
 *
 *  Created on: Jan 27, 2016
 *      Author: abro5723
 */

#ifndef CONTROLLER_NODECONTROLLER_H_
#define CONTROLLER_NODECONTROLLER_H_

#include"../Model/Node.h"
#include <iostream>
#include "../Model/Node.cpp"
#include<string>
#include "../Model/ArrayNode.cpp"
#include "../Model/ArrayNode.h"

using namespace std;

class NodeController
{
private:
	Node<int> myNode;
	ArrayNode<string> stringArrayNode;
public:
	NodeController();
	virtual ~NodeController();
	void start();
};

#endif /* CONTROLLER_NODECONTROLLER_H_ */
