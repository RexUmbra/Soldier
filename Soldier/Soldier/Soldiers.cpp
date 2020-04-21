#include "soldiers.h"

Soldiers::Soldiers(int n) : n(n)
{
	time_t("NULL");
	soldier temp;
	gun temp2;
	for (int i = 0; i < n; i++)
	{
		temp2.weight = rand() % 500 + 200;
		temp.h = rand() % 50 + 150;
		vec.push_back(temp);
		vec2.push_back(temp2);
	}
}

void Soldiers::sort(bool por)
{
	m.lock();
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (por)
			{
				if (vec[j].h > vec[j + 1].h)
				{
					swap(vec[j], vec[j + 1]);
				}
			}
			else
			{
				if (vec[j].h < vec[j + 1].h)
				{
					swap(vec[j], vec[j + 1]);
				}

			}
			
		}
	}
	m.unlock();
}

void Soldiers::sortGun(bool por)
{
	m2.lock();
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (por)
			{
				if (vec2[j].weight > vec2[j + 1].weight)
				{
					swap(vec2[j], vec2[j + 1]);
				}
			}
			else
			{
				if (vec2[j].weight < vec2[j + 1].weight)
				{
					swap(vec2[j], vec2[j + 1]);
				}

			}

		}
	}
	m2.unlock();
}

void Soldiers::print()
{
	for (int i = 0; i < n; i++)
	{
		cout << vec[i].h << ' ';
	}
	cout << '\n';
}

void Soldiers::printGun()
{
	for (int i = 0; i < n; i++)
	{
		cout << vec2[i].weight << ' ';
	}
	cout << '\n';
}

