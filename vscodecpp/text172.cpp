#include <iostream>
using namespace std;
#include <map>
// map容器 构造和赋值

void printmap(map<int, int> &m)

{
    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
    {
        cout << "key=" << (*it).first << "value=" << it->second << endl;
    }
    cout << endl;
}
void test01()
{
    map<int, int> m;
    m.insert(pair<int, int>(1, 10));
    m.insert(make_pair(2, 20));
    m.insert(pair<int, int>(4, 40));
    m.insert(pair<int, int>(3, 30));

    printmap(m);

    // 拷贝构造
    map<int, int> m2(m);
    printmap(m2);

    // 赋值

    map<int, int> m3;
    m3 = m2;
    printmap(m3);
}
int main()
{
    test01();

    system("pause");
    return 0;
}