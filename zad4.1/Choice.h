#pragma once
template <class T>
void ChoiceSort(T* x, int n)
{
	T min;
	for (int i = 0;i < n;i++) {
		min = x[i];
		for (int j = i + 1;j<n && min > x[j]; j++)min = x[j];
		x[i] = min;
	}
	
}