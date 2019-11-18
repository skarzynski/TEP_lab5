#include "pch.h"
#include "TreeDynamic.h"


TreeDynamic::TreeDynamic() {
	this->root = new NodeDynamic();
}


TreeDynamic::~TreeDynamic() {
	delete this->root;
}

NodeDynamic* TreeDynamic::getRoot() {
	return this->root;
}

bool TreeDynamic::moveSubtree(NodeDynamic* parentNode, NodeDynamic* newChildNode) {
	if (parentNode == nullptr || newChildNode == nullptr) {
		return false;
	}
	newChildNode->getParent()->removeChild(newChildNode);
	parentNode->addNewChild(newChildNode);
	return true;
}

void TreeDynamic::printTree() {
	this->root->printAllBelow();
}
