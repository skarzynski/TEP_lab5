#include "pch.h"
#include "NodeStatic.h"

#include <iostream>

NodeStatic::NodeStatic() {
	this->value = 0;
	this->parentNode = NULL;
}

NodeStatic::~NodeStatic() {
	//default
}

void NodeStatic::setValue(int newValue) {
	this->value = newValue;
}

int NodeStatic::getChildrenNumber() {
	return this->children.size();
}

void NodeStatic::addNewChild() {
	NodeStatic newChild;
	newChild.parentNode = this;
	this->children.push_back(newChild);
}

NodeStatic* NodeStatic::getChild(int childOffset) {
	if (childOffset < 0 || childOffset > this->getChildrenNumber()) {
		return NULL;
	}
	return &(this->children.at(childOffset));
}

void NodeStatic::print() {
	cout << " " << this->value;
}

void NodeStatic::printAllBelow() {
	this->print();
	for (int i = 0; i < this->getChildrenNumber(); i++) {
		this->children.at(i).printAllBelow();
	}
}

void NodeStatic::printUp() {
	print();
	if (this->parentNode != NULL) {
		this->parentNode->printUp();
	}
}