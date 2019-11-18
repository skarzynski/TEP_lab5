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

void NodeStatic::addNewChild(NodeStatic newChild) {
	this->children.push_back(newChild);
	newChild.parentNode = this;
}

bool NodeStatic::removeChild(NodeStatic* child) {
	int offset = child->getParent()->getOffset(child);
	if (child == nullptr || offset == -1) {
		return false;
	}
	child->getParent()->children.erase(child->getParent()->children.begin() + offset);
	child->parentNode = NULL;
	return true;
}

NodeStatic* NodeStatic::getChild(int childOffset) {
	if (childOffset < 0 || childOffset >= this->getChildrenNumber()) {
		return NULL;
	}
	return &(this->children.at(childOffset));
}

NodeStatic* NodeStatic::getParent() {
	return this->parentNode;
}

int NodeStatic::getOffset(NodeStatic* child) {
	int offset = -1;

	for (int i = 0; i < this->getChildrenNumber(); i++) {
		if (&(this->children.at(i)) == child) {
			offset = i;
		}
	}

	return offset;
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