#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

void test01()
{
    vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    reverse(v1.begin(), v1.end());
    for (size_t
             i = 0;
         i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
}

int main()
{
    test01();

    system("pause");
    return 0;
}