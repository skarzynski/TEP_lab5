#pragma once

#include "NodeStatic.h"

class TreeStatic {

private:
	NodeStatic root;			//korze� drzewa

public:
	TreeStatic();				//konstruktor domy�lny
	~TreeStatic();				//destruktor

	NodeStatic* getRoot();		//zwraca korze� drzewa

	void printTree();			//wypisuje warto�ci wszystkich w�z��w
};

