#include <iostream>
using namespace std;

int main()
{
    // 创建五只小猪体重
    int arr[5] = {100, 200, 300, 400, 500};
    int max = 0;
    for (int i = 0; i < 5; i++)

    {
        if (arr[i] >= max)
            max = arr[i];
    }
    cout << "最重的小猪体重" << max << endl;
    system("pause");
    return 0;
}
