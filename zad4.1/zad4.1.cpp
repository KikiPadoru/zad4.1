
#include <iostream>
#include "Znak.h"
using namespace std;

void BubbleSort(Znak* a, int n)
{
	Znak t;
	bool flag = true;
	while (flag)
	{
		flag = false;
		for (int i = 0; i < n - 1; i++)
			if (a[i].sum > a[i + 1].sum) { flag = true; t = a[i]; a[i] = a[i + 1]; a[i + 1] = t; }

	}
}


int main()
{
    Znak A[3];
    ifstream in ("man.txt");
    for (int i = 0; i < 3;i++) {
        in >> A[i];
        cout << A[i];
    }
	BubbleSort(A,3);
    for (int i = 0; i < 3; i++) {
        cout << A[i];
    }
}