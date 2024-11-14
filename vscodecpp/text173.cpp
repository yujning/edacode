#include <iostream>
using namespace std;
#include <map>

void printmap(map<int, int> &m)
{
    for (auto it = m.begin(); it != m.end(); ++it)
    {
        cout << "key=" << it->first << "value=" << it->second << endl;
    }
    cout << endl;
}
void test01()
{
    map<int, int> m1;
    m1.insert(pair<int, int>(1, 2));
    m1.insert(pair<int, int>(2, 3));
    m1.insert(pair<int, int>(3, 4));

    if (m1.empty())
    {
        cout << "m is empty" << endl;
    }
    else
    {
        cout << "m is not empty" << endl;
        cout << "m的大小为" << m1.size() << endl;
    }
    map<int, int> m2;
    m2.insert(pair<int, int>(10, 20));
    m2.insert(pair<int, int>(100, 200));
    m2.insert(pair<int, int>(1000, 2000));
    cout << "交换前：" << endl;
    printmap(m1);
    printmap(m2);

    cout << "交换后：" << endl;
    m1.swap(m2);
    printmap(m1);
    printmap(m2);
}

int main()
{
    test01();

    system("pause");
    return 0;
}