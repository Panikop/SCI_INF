#include <iostream>
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

