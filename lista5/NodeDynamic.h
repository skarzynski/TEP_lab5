#pragma once

#include <vector>

using namespace std;

class NodeDynamic {

private:
	vector<NodeDynamic*> children;			//wektor dzieci
	NodeDynamic* parentNode;				//wska�nik na rodzica
	int value;								//warto��

public:
	NodeDynamic();							//kontruktor bezparametrowy
	~NodeDynamic();							//destruktor

	void setValue(int newValue);			//ustawia warto��

	int getChildrenNumber();				//pobiera liczb� dzieci
	void addNewChild();						//dodaje nowe dziecko
	NodeDynamic* getChild(int childOffset);	//pobiera wska�nik na dziecko o zadanym offsecie

	void print();							//wypisuje warto�� w�z�a
	void printAllBelow();					//wypisuje warto�ci wszystkich w�z��w pocz�wszy od danego w d�
};

