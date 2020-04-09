#pragma once
template <class T>
void BubbleSort(T* a, int n)
{
	T t;
	bool flag = true;
	while (flag)
	{
		flag = false;
		for (int i = 0; i < n - 1; i++)
			if (a[i] > a[i + 1]) { flag = true; t = a[i]; a[i] = a[i + 1]; a[i + 1] = t; }

	}
}