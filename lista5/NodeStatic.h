#pragma once

#include <vector>

using namespace std;

class NodeStatic {
	
private:
	vector<NodeStatic> children;			//wektor dzieci
	NodeStatic* parentNode;					//wskaŸnik na rodzica
	int value;								//wartoœæ

public:
	NodeStatic();							//kontruktor bezparametrowy
	~NodeStatic();							//destruktor

	void setValue(int newValue);			//ustawia wartoœæ

	int getChildrenNumber();				//pobiera liczbê dzieci
	void addNewChild();						//dodaje nowe dziecko
	NodeStatic* getChild(int childOffset);	//pobiera wskaŸnik na dziecko o zadanym offsecie

	void print();							//wypisuje wartoœæ wêz³a
	void printAllBelow();					//wypisuje wartoœci wszystkich wêz³ów pocz¹wszy od danego w dó³
	void printUp();							//wypisuje wartoœci wszystkich wêz³ów pocz¹wszy od danego w górê
};