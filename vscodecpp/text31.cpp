#include <iostream>
using namespace std;

int main()
{
    int arr[9] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int end = sizeof(arr) / sizeof(arr[0]) - 1;
    int temp = 0;
    for (int i = 0; i < end; i++)
    {
        for (int j = 0; j < end - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "数组冒泡排序后";
    for (int j = 0; j < end + 1; j++)
    {
        cout << arr[j] << " ";
    }
    system("pause");
    return 0;
}