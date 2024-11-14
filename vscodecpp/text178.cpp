#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

class greaterfive
{
public:
    bool operator()(int val)
    {
        return val > 5;
    }
};
// 仿函数谓词
// 一元谓词
void test01()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    vector<int>::iterator it = find_if(v.begin(), v.end(), greaterfive()); // greaterfive()匿名函数对象,返回bool类型的仿函数称为谓词
    if (it == v.end())
    {
        cout << "没有大于5的数" << endl;
    }
    else
    {
        cout << "第一个大于5的数是" << *it << endl;
    }
}
int main()
{
    test01();

    system("pause");
    return 0;
}