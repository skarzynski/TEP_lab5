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
	void addNewChild(NodeDynamic* newChild);//dodaje nowe dziecko podane w parametrze
	bool removeChild(NodeDynamic* child);	//usuwa zadane dziecko (ca³e poddrzewo)
	NodeDynamic* getChild(int childOffset);	//pobiera wskaŸnik na dziecko o zadanym offsecie
	NodeDynamic* getParent();				//pobiera rodzica
	int getOffset(NodeDynamic* child);		//pobiera offset dziecka w wektorze

	void print();							//wypisuje wartoœæ wêz³a
	void printAllBelow();					//wypisuje wartoœci wszystkich wêz³ów pocz¹wszy od danego w dó³
};

