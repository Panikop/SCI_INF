// make.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <iostream>
#include <string>
#include "szyfrowanie.h"

int main()
{
	dane tek;
	dane liczba;
	dane ane;
	cout << "podaj male litery" << endl;
	getline(cin, tek.tekst);
	cout << "wybierz" << endl;
	int wybor;
	cin >> wybor;
	if (wybor == 1)
	{
		cout << "o ile chcesz przesunac liczbe" << endl;
		cin >> liczba.przesuniecie;
		system("cls");
		cout << ane.podstawieniowy(tek.tekst, liczba.przesuniecie) << endl;
		cout << "Czy chcesz rozszyfrowac kod? \n 1. Tak \n 2. Nie" << endl;
		int szyfr;
		cin >> szyfr;
		if (szyfr == 1)
		{
			tek.tekst = ane.podstawieniowy(tek.tekst, liczba.przesuniecie);
			cout << ane.antypodstawieniowy(tek.tekst, liczba.przesuniecie) << endl;
		}
	}
	else if (wybor == 2)
	{
		cout << ane.przedstawieniowy(tek.tekst) << endl;
		cout << "Czy chcesz rozszyfrowac kod? \n 1. Tak \n 2. Nie" << endl;
		int szyfr;
		cin >> szyfr;
		if (szyfr == 1)
		{
			tek.tekst = ane.przedstawieniowy(tek.tekst);
			cout << ane.przedstawieniowy(tek.tekst) << endl;
		}
	}
	else if (wybor == 3)
	{
		cout << "o ile chcesz przesunac liczbe" << endl;
		cin >> liczba.przesuniecie;
		string tresc = ane.podstawieniowy(tek.tekst, liczba.przesuniecie);
		cout << ane.przedstawieniowy(tresc) << endl;
	}
	else if (wybor == 4)
	{
		ane.dalej(tek.tekst);

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
