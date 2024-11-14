#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 3, 2, 4, 5};
    // int start = 0;
    int end = sizeof(arr) / sizeof(arr[0]) - 1;
    int temp = 0;
    for (int i = 0; i < end / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[end - i];
        arr[end - i] = temp;
    }
    cout << "数组逆置后：";
    for (int j = 0; j < end + 1; j++)
    {
        cout << arr[j] << " ";
    }

    system("pause");
    return 0;
}