#include <iostream>
using namespace std;
#include <vector>

void test01()
{
    vector<int> v;

    // 预留空间,reserve减少内存分配次数
    v.reserve(100000);

    int num = 0;
    int *p = NULL;
    for (int i = 0; i < 100000; i++)
    {
        v.push_back(i);
        if (p != &v[0])
        {
            p = &v[0];
            num++;
        }
    }
    cout << "num:" << num << endl;
}

int main()
{
    test01();

    system("pause");
    return 0;
}