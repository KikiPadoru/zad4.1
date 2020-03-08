
#include <iostream>
#include "Znak.h"
#include<vector>;
using namespace std;

void BubbleSort(Znak* a, int n)
{
	Znak t;
	bool flag = true;
	while (flag)
	{
		flag = false;
		for (int i = 0; i < n - 1; i++)
			if (a[i] > a[i + 1]) { flag = true; t = a[i]; a[i] = a[i + 1]; a[i + 1] = t; }

	}
}


int main()
{
	int a;
    ifstream in ("man.txt");
	in >> a;
	Znak *A = new Znak [a];
    for (int i = 0; i < a;i++) {
        in >> A[i];
        cout << A[i];
    }
	BubbleSort(A,3);
    for (int i = 0; i < 3; i++) {
        cout << A[i];
    }
}