#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    // int c = 0;
    cout << "a=" << endl;
    cin >> a; // cin从键盘上获取数值
    cout << "b=" << endl;
    cin >> b;
    cout << "c=a+b=" << int(a + b) << endl;

    system("pause");
    return 0;
}
