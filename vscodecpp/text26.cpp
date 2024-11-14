#include <iostream>
using namespace std;

int main()
{
    cout << "1" << endl;
    cout << "2" << endl;
    cout << "3" << endl;
    goto flag; // goto指定语句
    cout << "4" << endl;
flag:
    cout << "5" << endl;
    system("pause");
    return 0;
}
