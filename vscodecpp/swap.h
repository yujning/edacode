#include <iostream>
using namespace std;
void swap(int a, int b)
{
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
}