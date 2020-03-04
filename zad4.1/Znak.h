#pragma once
#include <fstream>
using namespace std;
class Znak
{
	string name;
	string zn;
	int data[3];//дата
	void copu(int *a);
private:
	Znak();
	Znak(Znak&a);
	Znak(const Znak& a);
	friend istream& operator >>(istream &is ,Znak&a);
	friend ostream& operator <<(istream& os, Znak&a);
};

