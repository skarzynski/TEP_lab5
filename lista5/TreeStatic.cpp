#include "pch.h"
#include "TreeStatic.h"


TreeStatic::TreeStatic() {
	this->root = NodeStatic();
}


TreeStatic::~TreeStatic() {
	//default
}

NodeStatic* TreeStatic::getRoot() {
	return &(this->root);
}

bool TreeStatic::moveSubtree(NodeStatic* parentNode, NodeStatic* newChildNode) {
	if (parentNode == nullptr || newChildNode == nullptr) {
		return false;
	}
	parentNode->addNewChild(*newChildNode);
	newChildNode->getParent()->removeChild(newChildNode);
	return true;
}

void TreeStatic::printTree() {
	this->root.printAllBelow();
}

int TreeStatic::count(int val) {
	return this->root.countAllBelow(val);
}