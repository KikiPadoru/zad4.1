#include "Znak.h"

void Znak::copu(int* a)
{
	for (int i = 0; i < 3; i++) {
		data[i] = a[i];
	}
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
istream& operator>>(istream& is, Znak& a)
{
	is >> a.name;
	is >> a.zn;
	is >> a.data[0] >> a.data[1] >> a.data[2];
}

ostream& operator<<(ostream& os,const Znak a)
{
	return os << a.name << " " <<a.zn << " " <<a.data[0] << " " <<a.data[1] << " " <<a.data[2]<<endl;
}
