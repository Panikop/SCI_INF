#include <iostream>
#include <math.h>
#include "szyfrowanie.h"

string dane::podstawieniowy(string tekst, int przesuniecie)
{
	string nowiem;
	unsigned char charo;
	for (int i = 0; i < tekst.length(); i++)
	{
		if (tekst[i] < 123 && tekst[i] > 96)
		{
			charo = tekst[i] + przesuniecie;

			if (charo > 122)
			{
				charo = (charo % 123) + 97;
			}
			nowiem += charo;
		}

	}
	return nowiem;
}
string dane::przedstawieniowy(string tekst)
{
	for (int i = 0; i < tekst.length() - 1; i += 2)
	{
		swap(tekst[i], tekst[i + 1]);
	}
	return tekst;
}

string dane::antypodstawieniowy(string tekst, int przesuniecie)
{
	string nowiem;
	unsigned char charo;
	for (int i = 0; i < tekst.length(); i++)
	{
		if (tekst[i] < 123 && tekst[i] > 96)
		{
			charo = tekst[i] - przesuniecie;

			if (charo < 97)
			{
				charo = (tekst[i] % 97) + 123;
				charo -= przesuniecie;
			}
			nowiem += charo;
		}
	}
	return nowiem;
}

string dane::dalej(string tekst)
{
	int Tablica[15];
	Tablica[0] = 2, Tablica[1] = 3, Tablica[2] = 5, Tablica[3] = 7, Tablica[4] = 11, Tablica[5] = 13, Tablica[6] = 17, Tablica[7] =19, Tablica[8] = 23, Tablica[9] = 29;
	int jeden, dwa;
	cout << "podaj dwie liczby pierwsze" << endl;
	cin >> jeden;
	cin >> dwa;
	int n, tocjent;
	n = jeden * dwa;
	tocjent = ((jeden - 1) * (dwa - 1));
	cout << "Wybierz liczbe" << endl;
	for (int i = 0; i < 10; i++)
	{
		if (Tablica[i] < tocjent)
		{
			cout << Tablica[i] << endl;
		}
	}
	int publiczny, prywatny;
	cin >> publiczny;
	cout << "Twoj kod publiczny ( " << publiczny << " " << n << " )" << endl;
	if (((tocjent + 1) % publiczny) == 0)
	{
		prywatny = (tocjent + 1) / publiczny;
		cout << "Twoj kod prywatny ( " << prywatny << " " << n << " )" << endl;
	}
	else
	{
		while (((tocjent + 1) % publiczny) != 0)
		{
			tocjent = tocjent * 2;
			prywatny = (tocjent + 1) / publiczny;
		}
		prywatny = (tocjent + 1) / publiczny;

		cout << "Twoj kod prywatny ( " << prywatny << " " << n << " )" << endl;
	}
	string plp;
	plp = "oko";
	return plp;
}