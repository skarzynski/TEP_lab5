#pragma once

#include "NodeDynamic.h"

class TreeDynamic {

private:
	NodeDynamic* root;			//korze� drzewa

public:
	TreeDynamic();				//konstruktor bezparametrowy
	~TreeDynamic();				//destruktor

	NodeDynamic* getRoot();		//zwraca korze� drzewa

	bool moveSubtree(NodeDynamic* parentNode, NodeDynamic* newChildNode); //przenosi poddrzewo z obcego drzewa do swojego

	void printTree();			//wypisuje warto�ci wszystkich w�z��w
};

