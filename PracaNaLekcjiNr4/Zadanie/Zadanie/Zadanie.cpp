// Zadanie.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "sort.h"
using namespace std;
zadanie sorto;
int main()
{
	int a;

	vector <int> sortowanie;
	srand(time(NULL));
	for (int i = 1; i <= 100; i++)
	{
		a = rand() % 1000;
		sortowanie.push_back(a);

	}
	int c;
	cout << "Ilosc cyft: " << sortowanie.size() << endl;
	for (int i = 0; i < sortowanie.size(); i++)
	{
		cout << sortowanie[i] << endl;
	}


	cout << "wybierz 1 lub 2" << endl;
	cin >> c;
	if (c == 1)
	{
		sorto.wstawianie(sortowanie);
	}
	else if (c == 2)
	{
		sorto.sort(sortowanie);
	}
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
