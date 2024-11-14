#include <iostream>
using namespace std;

int main()
{
    // 野指针：指针变量指向非法的内存空间
    int *p = (int *)0x1100;
    cout << *p << endl; // 访问野指针报错
    // 空指针和野指针都不是我们申请的空间，因此不要访问

    system("pause");
    return 0;
}