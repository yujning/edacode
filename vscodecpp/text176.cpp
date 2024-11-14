#include <iostream>
using namespace std;
#include <map>

class mycompare
{
public:
    bool operator()(int v1, int v2) const
    {
        // 降序
        return v1 > v2;
    }
};

// map排序
void test01()
{
    map<int, int, mycompare> m;
    m.insert(make_pair(1, 2));
    m.insert(make_pair(3, 4));
    m.insert(make_pair(2, 6));
    m.insert(make_pair(6, 8));
    m.insert(make_pair(4, 10));

    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
    {
        cout << "Key=" << it->first << " Value=" << it->second << endl;
    }
    cout << endl;
}

int main()
{
    test01();

    system("pause");
    return 0;
}