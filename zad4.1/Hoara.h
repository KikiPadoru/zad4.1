#pragma once
template <class T>

void hoarasort(T* mas, int first, int last)
{

    T mid;
    T count;
    int f = first, l = last;
    mid = mas[(f + l) / 2]; //вычисление опорного элемента
    do
    {
        while (mas[f] < mid) f++;
        while (mas[l] > mid) l--;
        if (f <= l) //перестановка элементов
        {
            count = mas[f];
            mas[f] = mas[l];
            mas[l] = count;
            f++;
            l--;
        }
    } while (f < l);
    if (first < l) hoarasort(mas, first, l);
    if (f < last) hoarasort(mas, f, last);
}