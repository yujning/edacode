#include <iostream>
using namespace std;
#include <vector>

void printvector(vector<int> &v)
{
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    vector<int> v1; // 默认构造，无参构造
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    printvector(v1);

    // 通过区间方式进行构造
    vector<int> v2(v1.begin(), v1.end());
    printvector(v2);

    // n个elem方式构造
    vector<int> v3(10, 9); // 10个9
    printvector(v3);

    // 拷贝构造
    vector<int> v4(v1);
    printvector(v4);
}

int main()
{
    test01();

    system("pause");
    return 0;
}