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
	vector<soldier> vec;
public:
	Soldiers(int n);
	void sort(bool por);
	void print();
	
};

