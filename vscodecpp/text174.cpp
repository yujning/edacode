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
// map插入和删除
void test01()
{
    map<int, int> m;
    m.insert(pair<int, int>(1, 2));

    m.insert(make_pair(2, 3));

    m.insert(map<int, int>::value_type(3, 4));

    m[4] = 40;
    printmap(m);
    cout << m[5] << endl; // m[5]没有插入过，所以返回0，不建议用这种

    printmap(m);

    // 删除
    m.erase(m.begin());
    printmap(m);

    m.erase(2);
    printmap(m);

    m.erase(40);
    printmap(m); // 只会按key删除，不会按value

    // 清空
    m.clear();
    printmap(m);

    m.erase(m.begin(), m.end());
    printmap(m);
}

int main()
{
    test01();

    system("pause");
    return 0;
}