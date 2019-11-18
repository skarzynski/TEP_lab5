#pragma once

#include <vector>

using namespace std;

class NodeDynamic {

private:
	vector<NodeDynamic*> children;			//wektor dzieci
	NodeDynamic* parentNode;				//wskaŸnik na rodzica
	int value;								//wartoœæ

public:
	NodeDynamic();							//kontruktor bezparametrowy
	~NodeDynamic();							//destruktor

	void setValue(int newValue);			//ustawia wartoœæ

	int getChildrenNumber();				//pobiera liczbê dzieci
	void addNewChild();						//dodaje nowe dziecko
	NodeDynamic* getChild(int childOffset);	//pobiera wskaŸnik na dziecko o zadanym offsecie

	void print();							//wypisuje wartoœæ wêz³a
	void printAllBelow();					//wypisuje wartoœci wszystkich wêz³ów pocz¹wszy od danego w dó³
};

