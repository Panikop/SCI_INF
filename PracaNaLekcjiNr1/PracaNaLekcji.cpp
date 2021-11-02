// PracaNaLekcji.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include <iostream>
#include <string>
using namespace std;



string podstawieniowy(string tekst, int przesuniecie)
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
string przedstawieniowy(string tekst)
{
	for (int i = 0; i < tekst.length() - 1; i += 2)
	{
		swap(tekst[i], tekst[i + 1]);
	}
	return tekst;
}

string antypodstawieniowy(string tekst, int przesuniecie)
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
		system("cls");
		cout << podstawieniowy(tekst, liczba) << endl;
		cout << "Czy chcesz rozszyfrowac kod? \n 1. Tak \n 2. Nie" << endl;
		int szyfr;
		cin >> szyfr;
		if (szyfr == 1)
		{
			tekst = podstawieniowy(tekst, liczba);
			cout << antypodstawieniowy(tekst, liczba) << endl;
		}
	}
	else if (wybor == 2)
	{
		cout << przedstawieniowy(tekst) << endl;
		cout << "Czy chcesz rozszyfrowac kod? \n 1. Tak \n 2. Nie" << endl;
		int szyfr;
		cin >> szyfr;
		if (szyfr == 1)
		{
			tekst = przedstawieniowy(tekst);
			cout << przedstawieniowy(tekst) << endl;
		}
	}
	else if (wybor == 3)
	{
		cout << "o ile chcesz przesunac liczbe" << endl;
		int liczba;
		cin >> liczba;
		string tresc = podstawieniowy(tekst, liczba);
		cout << przedstawieniowy(tresc) << endl;
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
