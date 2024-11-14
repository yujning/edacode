#include <iostream>
using namespace std;
#include <stack>
void test01()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << "栈的大小" << s.size() << endl;
    while (!s.empty())
    {
        cout << s.top() << endl; // 栈顶元素,查看元素需要把元素一个一个拿出来看，直到看需要的元素为止
        s.pop();                 // 出栈
    }
    cout << "栈的大小" << s.size() << endl;
}

int main()
{
    test01();

    system("pause");
    return 0;
}