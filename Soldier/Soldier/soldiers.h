#pragma once
#include <iostream>
#include "Struct.h"
#include <vector>
#include <mutex>
using namespace std;
class Soldiers
{
private:
	int n;
	mutable mutex m;
	mutable mutex m2;
	vector<soldier> vec;
	vector<gun> vec2;
public:
	Soldiers(int n);
	void sort(bool por);
	void sortGun(bool por);
	void print();
	void printGun();
	
};

