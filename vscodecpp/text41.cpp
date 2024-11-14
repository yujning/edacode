#include <iostream>
using namespace std;

int main()
{
    // 在32位操作系统下，占用4个字节空间；64位，8个字节
    int a = 10;
    int *p = &a; // 指针指向数据a的地址

    cout << "sizeof (int*)=" << sizeof(p) << endl; // p=&a;
    cout << "sizeof (float*)=" << sizeof(float *) << endl;
    cout << "sizeof (double*)=" << sizeof(double *) << endl;
    cout << "sizeof (char*)=" << sizeof(char *) << endl;
    cout << "sizeof(long long*)" << sizeof(long long *) << endl;

    system("pause");
    return 0;
}