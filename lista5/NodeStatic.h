#pragma once

#include <vector>

using namespace std;

class NodeStatic {
	
private:
	vector<NodeStatic> children;			//wektor dzieci
	NodeStatic* parentNode;					//wska�nik na rodzica
	int value;								//warto��

public:
	NodeStatic();							//kontruktor bezparametrowy
	~NodeStatic();							//destruktor

	void setValue(int newValue);			//ustawia warto��

	int getChildrenNumber();				//pobiera liczb� dzieci
	void addNewChild();						//dodaje nowe dziecko
	NodeStatic* getChild(int childOffset);	//pobiera wska�nik na dziecko o zadanym offsecie

	void print();							//wypisuje warto�� w�z�a
	void printAllBelow();					//wypisuje warto�ci wszystkich w�z��w pocz�wszy od danego w d�
	void printUp();							//wypisuje warto�ci wszystkich w�z��w pocz�wszy od danego w g�r�
};