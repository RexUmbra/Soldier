#pragma once
#include <iostream>
#include "Struct.h"
#include <vector>
using namespace std;
class Soldiers
{
private:
	int n;
	vector<soldier> vec;
public:
	Soldiers(int n);
	void sort();
	void print();
};

