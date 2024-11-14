#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

void myprint(int a)
{
    cout << a << " ";
}
class greater3
{
public:
    bool operator()(int a)
    {
        return a > 3;
    }
};

// replace_if
void test01()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    replace_if(v.begin(), v.end(), greater3(), 7);
    for_each(v.begin(), v.end(), myprint);
}

int main()
{
    test01();

    system("pause");
    return 0;
}