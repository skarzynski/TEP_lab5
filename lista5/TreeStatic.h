#pragma once

#include "NodeStatic.h"

class TreeStatic {

private:
	NodeStatic root;			//korzeñ drzewa

public:
	TreeStatic();				//konstruktor bezparametrowy
	~TreeStatic();				//destruktor

	NodeStatic* getRoot();		//zwraca korzeñ drzewa

	bool moveSubtree(NodeStatic* parentNode, NodeStatic* newChildNode); //przenosi poddrzewo z obcego drzewa do swojego

	void printTree();			//wypisuje wartoœci wszystkich wêz³ów
	int count(int val);			//zlicza ilość wystąpień argumentu w drzewie
};

