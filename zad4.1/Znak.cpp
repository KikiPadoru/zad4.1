#include "Znak.h"

void Znak::copu(int* a)
{
	
	data[0] = a[0];
	data[1] = a[1];
	data[2] = a[2];
	
}

void Znak::va(int* a)
{
	int d = a[2] * 10000 + a[1] * 100 + a[0];
	sum = d;
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
	va(b);

}
//Znak& Znak::operator=(const Znak& a)
//{
//	sum = a.sum;
//	strcpy(name, a.name);
//	strcpy(zn, a.zn);
//	int* b = (int*)a.data;
//	copu(b);
//	return;
//}
istream& operator >>(istream& in, Znak& a) {  return in >> a.name >> a.zn >> a.data[0] >> a.data[1] >> a.data[2]; }

ostream& operator<<(ostream& on,Znak& a){ 
	int b = a.data[2] * 10000 + a.data[1] * 100 + a.data[0];
	return on << a.name << " " <<a.zn << " " <<a.data[0] << " " <<a.data[1] << " " <<a.data[2]<<" "<<b<<" "<<a.sum<<endl;}
