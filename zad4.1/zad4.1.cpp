
#include <iostream>
#include "Znak.h"
using namespace std;

int main()
{
    Znak A;
    ifstream in ("man.txt");
    for (int i = 0; i < 3;i++) {
        cin >> *A;
        cout << A;
    }
}