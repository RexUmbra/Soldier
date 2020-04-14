#include "soldiers.h"

Soldiers::Soldiers(int n) : n(n)
{
	time_t("NULL");
	soldier temp;
	for (int i = 0; i < n; i++)
	{
		temp.h = rand() % 50 + 150;
		vec.push_back(temp);
	}
}

void Soldiers::sort()
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (vec[j].h > vec[j + 1].h)
			{
				swap(vec[j], vec[j + 1]);
			}
		}
	}
}

void Soldiers::print()
{
	for (int i = 0; i < n; i++)
	{
		cout << vec[i].h << ' ';
	}
}

