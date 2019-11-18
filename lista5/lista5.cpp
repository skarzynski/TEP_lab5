﻿// lista5.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include "NodeStatic.h"

#include <iostream>

using namespace std;

void treeTest() {
	NodeStatic root;

	root.addNewChild();
	root.addNewChild();

	root.getChild(0)->setValue(1);
	root.getChild(1)->setValue(2);

	root.getChild(0)->addNewChild();
	root.getChild(0)->addNewChild();

	root.getChild(0)->getChild(0)->setValue(11);
	root.getChild(0)->getChild(1)->setValue(12);
	
	root.getChild(1)->addNewChild();
	root.getChild(1)->addNewChild();

	root.getChild(1)->getChild(0)->setValue(21);
	root.getChild(1)->getChild(1)->setValue(22);

	root.printAllBelow();
	cout << endl;
	root.getChild(0)->getChild(1)->printUp();
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
