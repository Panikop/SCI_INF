// ConsoleApplication19.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>
using namespace std;



string podstawieniowy(string tekst, int przesuniecie)
{
	for (int i = 0; i < tekst.length(); i++)
	{
		if (tekst[i] < 123 && tekst[i] > 96)
		{
			tekst[i] += przesuniecie;

			if (tekst[i] > 122)
			{
				tekst[i] = tekst[i] % 123 + 97;
			}
		}
		
	}
	return tekst;
}
string przedstawieniowy(string tekst)
{
	for (int i = 0; i < tekst.length() - 1; i += 2)
	{
		swap(tekst[i], tekst[i + 1]);
	}
	return tekst;
}



int main()
{
	string tekst;
	cout << "podaj male litery" << endl;
	getline(cin, tekst);
	cout << "wybierz" << endl;
	int wybor;
	cin >> wybor;
	if (wybor == 1)
	{
		cout << "o ile chcesz przesunac liczbe" << endl;
		int liczba;
		cin >> liczba;
		cout << podstawieniowy(tekst, liczba) << endl;
	}
	else if (wybor == 2)
	{
		cout << przedstawieniowy(tekst) << endl;
	}
	else if (wybor == 3)
	{
		cout << "o ile chcesz przesunac liczbe" << endl;
		int liczba;
		cin >> liczba;
		string tresc = podstawieniowy(tekst, liczba);
		cout << przedstawieniowy(tresc) << endl;
	}
	else if (wybor == 4)
	{
		cout << tekst;
	}
}

