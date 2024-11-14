#include <iostream>
using namespace std;

template <typename T>
void myswap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
template <typename T>
void mysort(T arr[], int len) // 选择排序，从大到小
{
    for (int i = 0; i < len; i++)
    {
        int max = i;
        for (int j = i + 1; j < len; j++)
        {
            if (arr[j] > arr[max])
            {
                max = j;
            }
        }
        if (max != i)
        {
            myswap(arr[i], arr[max]);
        }
    }
}

// 打印数组模板
template <typename T>
void printarr(T arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void test01()
{
    char chararr[] = "badcfe";
    int num = sizeof(chararr) / sizeof(chararr[0]);
    mysort(chararr, num);
    printarr(chararr, num);
}
void test02()
{
    int intarr[] = {1, 3, 5, 7, 9};
    int num = sizeof(intarr) / sizeof(intarr[0]);
    mysort(intarr, num);
    printarr(intarr, num);
}
int main()
{
    test01();
    test02();

    system("pause");
    return 0;
}