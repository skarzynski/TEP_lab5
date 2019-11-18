#pragma once

#include "NodeStatic.h"

class TreeStatic {

private:
	NodeStatic root;			//korze� drzewa

public:
	TreeStatic();				//konstruktor bezparametrowy
	~TreeStatic();				//destruktor

	NodeStatic* getRoot();		//zwraca korze� drzewa

	bool moveSubtree(NodeStatic* parentNode, NodeStatic* newChildNode); //przenosi poddrzewo z obcego drzewa do swojego

	void printTree();			//wypisuje warto�ci wszystkich w�z��w
};

