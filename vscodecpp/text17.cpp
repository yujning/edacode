#include <iostream>
using namespace std;

int main()
{
    int num = 100;
    do
    {
        int a = 0; // 个位
        int b = 0; // 十位
        int c = 0; // 百位

        a = num % 10;
        b = num / 10 % 10;
        c = num / 100;
        if (a * a * a + b * b * b + c * c * c == num)
        {
            cout << num << endl;
        }
        num++;
    } while (num < 1000);

    system("pause");
    return 0;
}