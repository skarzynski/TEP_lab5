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
	NodeDynamic* newChild = new NodeDynamic();
	newChild->parentNode = this;
	this->children.push_back(newChild);
}

void NodeDynamic::addNewChild(NodeDynamic* newChild) {
	this->children.push_back(newChild);
	newChild->parentNode = this;
}

bool NodeDynamic::removeChild(NodeDynamic* child) {
	int offset = child->getParent()->getOffset(child);
	if (child == nullptr || offset == -1) {
		return false;
	}
	child->getParent()->children.erase(child->getParent()->children.begin() + offset);
	child->parentNode = NULL;
	return true;
}

NodeDynamic* NodeDynamic::getChild(int childOffset) {
	if (childOffset < 0 || childOffset >= this->children.size()) {
		return nullptr;
	}
	return this->children.at(childOffset);
}

NodeDynamic* NodeDynamic::getParent() {
	return this->parentNode;
}

int NodeDynamic::getOffset(NodeDynamic* child) {
	int offset = -1;

	for (int i = 0; i < this->getChildrenNumber(); i++) {
		if (this->children.at(i) == child) {
			offset = i;
		}
	}

	return offset;
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
