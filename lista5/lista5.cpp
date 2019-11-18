// lista5.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include "TreeStatic.h"

#include <iostream>

using namespace std;

void treeTest() {
	TreeStatic tree;

	tree.getRoot()->addNewChild();
	tree.getRoot()->addNewChild();

	tree.getRoot()->getChild(0)->setValue(1);
	tree.getRoot()->getChild(1)->setValue(2);
	
	tree.getRoot()->getChild(0)->addNewChild();
	tree.getRoot()->getChild(0)->addNewChild();

	tree.getRoot()->getChild(0)->getChild(0)->setValue(11);
	tree.getRoot()->getChild(0)->getChild(1)->setValue(12);
	
	tree.getRoot()->getChild(1)->addNewChild();
	tree.getRoot()->getChild(1)->addNewChild();

	tree.getRoot()->getChild(1)->getChild(0)->setValue(21);
	tree.getRoot()->getChild(1)->getChild(1)->setValue(22);

	tree.printTree();
	cout << endl;
	tree.getRoot()->getChild(0)->getChild(1)->printUp();
}

int main() {

	treeTest();

}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
