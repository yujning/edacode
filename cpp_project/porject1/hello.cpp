#include "hello.h"
#include <iostream>
using std::cout;
using std::endl;
void Hello::show() const
{
    cout << "Hello World" << endl;
    cout << "中国，你好" << endl;
    system("pause");
}