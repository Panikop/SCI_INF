#pragma once
#include <string>
#include <utility>
using namespace std;
class dane
{
public:
	string tekst;
	int przesuniecie;
	string przedstawieniowy(string tekst);
	string podstawieniowy(string tekst, int przesuniecie);
	string antypodstawieniowy(string tekst, int przesuniecie);
	string dalej(string tekst);
};
