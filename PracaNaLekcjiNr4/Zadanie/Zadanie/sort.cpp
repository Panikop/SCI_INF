#include <iostream>
#include <vector>
#include <cstdlib>
#include "sort.h"

int zadanie::sort(std::vector <int> sortowanie)
{
	for (int i = 0; i < (sortowanie.size() + 1); i++)
	{
		for (int j = 0; j < (sortowanie.size() - 1) ; j++)
		{
			if (sortowanie[j] > sortowanie[j + 1])
			{
				std::swap(sortowanie[j], sortowanie[j + 1]);
			}
		}
	}
	for (int i = 0; i < sortowanie.size(); i++)
	{
		std::cout << sortowanie[i] << std::endl;
	}
	return 0;
}
int zadanie::wstawianie(std::vector <int> sortowanie)
{
	int temp;
	int j;
	for (int i = 1; i < sortowanie.size(); i++)
	{
		temp = sortowanie[i];
		j = i - 1;
		while (j >= 0 && sortowanie[j] > temp)
		{
			sortowanie[j + 1] = sortowanie[j];
			--j;
		}
		sortowanie[j + 1] = temp;
	}
	for (int i = 0; i < sortowanie.size(); i++)
	{
		std::cout << sortowanie[i] << std::endl;
	}
	return 0;
}