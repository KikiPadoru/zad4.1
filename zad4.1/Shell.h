#pragma once
template <class T>
void ShellSort(T* a, int size) {
	int step = size / 2;//�������������� ���.
	while (step > 0)//���� ��� �� 0
	{
		for (int i = 0; i < (size - step); i++) {
			for (int j = i; j >= 0 && a[j] > a[j + step];j--)
			{
				T temp = a[j];
				a[j] = a[j + step];
				a[j + step] = temp;
			}
		}
		step /= 2;//��������� ���
	}
}