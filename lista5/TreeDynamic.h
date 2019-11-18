#pragma once

#include "NodeDynamic.h"

class TreeDynamic {

private:
	NodeDynamic* root;			//korzeñ drzewa

public:
	TreeDynamic();				//konstruktor bezparametrowy
	~TreeDynamic();				//destruktor

	NodeDynamic* getRoot();		//zwraca korzeñ drzewa

	bool moveSubtree(NodeDynamic* parentNode, NodeDynamic* newChildNode); //przenosi poddrzewo z obcego drzewa do swojego

	void printTree();			//wypisuje wartoœci wszystkich wêz³ów
};

