#pragma once

#include "NodeStatic.h"

class TreeStatic {

private:
	NodeStatic root;			//korzeñ drzewa

public:
	TreeStatic();				//konstruktor domyœlny
	~TreeStatic();				//destruktor

	NodeStatic* getRoot();		//zwraca korzeñ drzewa

	void printTree();			//wypisuje wartoœci wszystkich wêz³ów
};

