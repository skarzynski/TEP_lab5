#include "pch.h"
#include "TreeStatic.h"


TreeStatic::TreeStatic() {
	this->root = NodeStatic();
}


TreeStatic::~TreeStatic() {

}

NodeStatic* TreeStatic::getRoot() {
	return &(this->root);
}


void TreeStatic::printTree() {
	this->root.printAllBelow();
}