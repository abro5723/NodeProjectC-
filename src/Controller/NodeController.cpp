/*
 * NodeController.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: abro5723
 */

#include "NodeController.h"

NodeController::NodeController()
{
	this->myNode.setValue(5);
	this->stringArrayNode.setValue("words are fun");

}

NodeController::~NodeController()
{
	// TODO Auto-generated destructor stub
}

void NodeController :: start()
{
	cout << myNode.getValue() << endl;
	cout << stringArrayNode.getValue() << endl;
}

