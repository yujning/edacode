#include <iostream>
using namespace std;

// struct默认权限是公共 public
// class默认权限是私有private

class c
{
    int id; // 默认权限是私有
};

struct s
{
    int id; // 默认权限是公共
};

int main()
{
    c c1;
    // c1.id = 100;报错
    s s1;
    s1.id = 100;

    system("pause");
    return 0;
}