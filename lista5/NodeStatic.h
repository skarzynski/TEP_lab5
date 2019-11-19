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
	int getValue();							//pobiera wartość węzła

	int getChildrenNumber();				//pobiera liczbê dzieci
	void addNewChild();						//dodaje nowe dziecko
	void addNewChild(NodeStatic newChild);	//dodaje nowe dziecko podane w parametrze
	bool removeChild(NodeStatic* child);	//usuwa zadane dziecko (ca³e poddrzewo)
	NodeStatic* getChild(int childOffset);	//pobiera wskaŸnik na dziecko o zadanym offsecie
	NodeStatic* getParent();				//pobiera rodzica
	int getOffset(NodeStatic* child);		//pobiera offset dziecka w wektorze
	int count(int val);						//zlicza ilość wystąpień argumentu w swoim wektorze dzieci
	int countAllBelow(int val);				//zlicza ilość wystąpień argumentu w swoim poddrzewie

	void print();							//wypisuje wartoœæ wêz³a
	void printAllBelow();					//wypisuje wartoœci wszystkich wêz³ów pocz¹wszy od danego w dó³
	void printUp();							//wypisuje wartoœci wszystkich wêz³ów pocz¹wszy od danego w górê
};