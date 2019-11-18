#include "pch.h"
#include "NodeDynamic.h"

#include <iostream>

using namespace std;

NodeDynamic::NodeDynamic() {
	this->value = 0;
	this->parentNode = NULL;
}


NodeDynamic::~NodeDynamic() {
	for (int i = 0; i < this->children.size(); i++) {
		delete this->children.at(i);
	}
}

void NodeDynamic::setValue(int newValue) {
	this->value = newValue;
}

int NodeDynamic::getChildrenNumber() {
	return this->children.size();
}

void NodeDynamic::addNewChild() {
	this->children.push_back(new NodeDynamic());
}

NodeDynamic* NodeDynamic::getChild(int childOffset) {
	if (childOffset < 0 || childOffset >= this->children.size()) {
		return nullptr;
	}
	return this->children.at(childOffset);
}

void NodeDynamic::print() {
	cout << " " << this->value;
}

void NodeDynamic::printAllBelow() {
	this->print();
	for (int i = 0; i < this->children.size(); i++) {
		this->children.at(i)->printAllBelow();
	}
}
