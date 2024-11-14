#include <iostream>
using namespace std;

int main()
{
    // 数组名用途
    // 1.获取数组在内存的首地址
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "整个数组所占内存空间" << sizeof(arr) << endl;
    cout << "每个元素所占内存空间为" << sizeof(arr[0]) << endl;
    cout << "数组的元素个数" << sizeof(arr) / sizeof(arr[0]) << endl;

    // 2.可以通过数组名获取到数组首地址
    cout << "数组首地址为" << (long long)arr << endl;
    cout << "数组中第一个元素地址为" << (long long)&arr[0] << endl;
    cout << "数组第二个元素的地址为" << (long long)&arr[1] << endl;

    // arr=100;错误，数组名是常量，不可赋值

    system("pause");
    return 0;
}