#include "Znak.h"

void Znak::copu(int* a)
{
	
	data[0] = a[0];
	data[1] = a[1];
	data[2] = a[2];
	
}

int Znak::Sum()
{
	return data[2] * 10000 + data[1] * 100 + data[0];
}


bool Znak::operator>(Znak& a)
{
	return Sum()> a.Sum();
}

bool Znak::operator<(Znak& a)
{
	return Sum() < a.Sum();
}

Znak::Znak() {
	name = "";
	zn = "";
}
Znak::Znak(Znak& a) {
	name = a.name;
	zn = a.zn;
	int* b = (int*)a.data;
	copu(b);

}
istream& operator >>(istream& in, Znak& a) { 
	in >> a.name >> a.zn >> a.data[0] >> a.data[1] >> a.data[2];
	return in;
}

ostream& operator<<(ostream& on,Znak& a){ 
	return on << a.name << " " <<a.zn << " " <<a.data[0] << " " <<a.data[1] << " " <<a.data[2]<<" "<<endl;}
