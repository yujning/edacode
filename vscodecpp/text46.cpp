#include <iostream>
using namespace std;
void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    // 地址传递，与值传递不同，值传递只改变了形参，实参不改变。
    // 地址传递，是实参的地址传递进去了，就可以在函数内部通过实参地址来改变实参
    int a = 10;
    int b = 20;
    swap(&a, &b);
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    system("pause");
    return 0;
}