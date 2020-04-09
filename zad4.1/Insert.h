#pragma once
template <class T>
void InsertSort(T* x, int n)
{
	T t;
	for (int i = 1;i < n;i++)
		for (int j = i;j > 0 && x[j - 1] > x[j];j--){
			t = x[j - 1]; x[j - 1] = x[j]; x[j] = t;
		}
}