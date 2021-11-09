// ConsoleApplication19.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include <iostream>
#include <string>
#include "szyfrowanie.h"
using namespace std;


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
}

