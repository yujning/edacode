#include <iostream>
using namespace std;
#include <vector>

void printvector(vector<int> &v)
{
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    cout << "交换前：" << endl;
    vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    printvector(v1);

    vector<int> v2;
    for (int i = 0; i < 10; i++)
    {
        v2.push_back(9 - i);
    }
    printvector(v2);

    cout << "交换后：" << endl;
    v1.swap(v2);
    printvector(v1);
    printvector(v2);
}

// 实际用途，巧用swap可以收缩内存空间
void test02()
{

    vector<int> v3;

    for (int i = 0; i < 100000; i++)
    {
        v3.push_back(i);
    }
    cout << "v3的容量为" << v3.capacity() << endl;
    cout << "v3的大小为" << v3.size() << endl;

    v3.resize(3); // 重新制定大小
    cout << "v3的容量为" << v3.capacity() << endl;
    cout << "v3的大小为" << v3.size() << endl;

    // 巧用swap收缩内存
    vector<int>(v3).swap(v3);
    cout << "v3的容量为" << v3.capacity() << endl;
    cout << "v3的大小为" << v3.size() << endl;
}

int main()
{
    test01();
    test02();

    system("pause");
    return 0;
}