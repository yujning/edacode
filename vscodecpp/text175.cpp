#include <iostream>
using namespace std;
#include <map>

void test01()
{
    map<int, int> m;
    m.insert(pair<int, int>(1, 10));
    m.insert(pair<int, int>(2, 20));
    m.insert(pair<int, int>(3, 30));
    m.insert(pair<int, int>(3, 40));

    map<int, int>::iterator it = m.find(4);

    if (it != m.end())
    {
        cout << "查到元素key=" << it->first << " " << "value=" << it->second << endl;
    }
    else
    {
        cout << "未查到元素" << endl;
    }

    // 统计
    int num = m.count(3);
    cout << "num=" << num << endl; // 不允许有重复的key，所以第二个3的value被覆盖了,count要不0要不1
}
int main()
{
    test01();

    system("pause");
    return 0;
}