/*
 * NodeController.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: abro5723
 */

#include "NodeController.h"

NodeController::NodeController()
{
//	this->myNode.setValue(5);
//	this->stringArrayNode.setValue("words are fun");
//	this->otherArrayNode.setValue("linked node");
//	stringArrayNode.setNext(&otherArrayNode);
	myStringArray = new CTECArray<string>(5);


}

NodeController::~NodeController()
{
	// TODO Auto-generated destructor stub
}

void NodeController :: start()
{
//	cout << myNode.getValue() << endl;
//	cout << stringArrayNode.getValue() << endl;
	string first = "first";
	string second = "not second";
	string third = "fdas;";
	string fourth = "fucas";
	string fifth + "fhdjsak";

	myStringArray->set(0, first);
	cout << myStringArray->get(0) << endl;
	myStringArray->set(2, second);
	myStringArray->set(3, third);
	myStringArray->set(4, fourth);
	myStringArray->set(5, fifth);

	for(int index = 0; index < myStringArray->getSize(); index ++)
	{
		cout << "the contents at " << index << " are: " << myStringArray->get(index) << endl;
	}
}

