#include <iostream>
using namespace std;
#include <vector>

// vector插入和删除
// push_back(ele); // 尾部插入元素ele
// pop_back();//删除最后一个元素
// insert(const_iterator pos,ele) //迭代器指向位置pos插入元素ele
// insert(const_iterator pos,int count,ele) //迭代器指向位置pos插入count个元素ele
// erase(const_iterator pos);//删除迭代器指向的元素
// erase(const_iterator start,const_iterator end);//删除迭代器从start到end之间的元素
// clear();//删除容器中所有元素

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
    // 遍历
    printvector(v1);

    // 尾删
    v1.pop_back();
    printvector(v1);

    // 插入
    v1.insert(v1.begin(), 100);
    printvector(v1);

    v1.insert(v1.begin(), 2, 100);
    printvector(v1);

    // 删除
    v1.erase(v1.begin());
    printvector(v1);

    v1.erase(v1.begin(), v1.end());//清空
    printvector(v1);

    v1.clear();
    printvector(v1);
}
int main()
{
    test01();

    system("pause");
    return 0;
}