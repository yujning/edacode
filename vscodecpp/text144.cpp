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

// vector容器容量和大小
void test01()
{
    vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    printvector(v1);

    if (v1.empty())
    {
        cout << "v1为空" << endl;
    }
    else
    {
        cout << "v1不为空" << endl;
        cout << "v1的容量" << v1.capacity() << endl; // 容量会扩充
        cout << "v1的大小为" << v1.size() << endl;
    }

    // 重新指定大小
    v1.resize(15);
    printvector(v1); // 如果长了就用0填充
    // v1.resize(15,100);//表示用100填充

    v1.resize(6);
    printvector(v1);                             // 如果短就会删除
    cout << "v1的容量" << v1.capacity() << endl; // 容量没变
}

int main()
{
    test01();

    system("pause");
    return 0;
}