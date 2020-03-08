#pragma once
#include <iostream>
#include <fstream>
using namespace std;
class Znak
{
public:
	
	string name;
	string zn;
	int data[3];//дата
	void copu(int *a);
	int Sum();
	bool operator >(Znak& a);
	bool operator <(Znak& a);
	Znak();
	Znak(Znak&a);
	Znak(const Znak& a);
	friend istream& operator >> (istream &in ,Znak&a);
	friend ostream& operator << (ostream& on, Znak&a);

};

