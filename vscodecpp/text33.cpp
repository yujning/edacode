#include <iostream>
using namespace std;

int main()
{
    // 二维数组所占内存空间
    int arr[2][3] = {1, 2, 3, 4, 5, 6};
    cout << "二维数组所占内存空间为" << sizeof(arr) << endl;
    cout << "二维数组第一行所占内存为" << sizeof(arr[0]) << endl;
    cout << "二维数组第一个元素所占内存为" << sizeof(arr[0][0]) << endl;
    cout << "二维数组有" << sizeof(arr) / sizeof(arr[0]) << "行" << endl;
    cout << "二维数组有" << sizeof(arr[0]) / sizeof(arr[0][0]) << "列" << endl;
    // 二维数组的首地址
    cout << "二维数组的首地址为" << &arr << endl;
    cout << "二维数组第一个元素的地址为" << &(arr[0][0]) << endl;
    cout << "二维数组第二行的首地址为" << &(arr[1]) << endl;

    system("pause");
    return 0;
}