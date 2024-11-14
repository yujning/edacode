#include <iostream>
using namespace std;

// 公共权限：类内类外都可以访问
// 保护权限：类内可以访问，类外不可以访问
// 私有权限：类内可以访问，类外不可以访问
class person
{
public:
    string name;

protected:
    string car;

private:
    int password;

public: // 若改成protected/private，则类外不可访问该函数
    void func()
    {
        name = "张三";
        car = "拖拉机";
        password = 124342;
    }
};

int main()
{
    person p;
    p.name = "李四";
    // p.car = "奔驰";//保护权限内容，在类外不可访问
    // p.password=123;//私有权限，类外不可访问
    p.func();

    system("pause");
    return 0;
}