#include <iostream>
using namespace std;
const double pi = 3.14;

// 创建圆类
class circle
{
    // 访问权限
    // 公共权限
public:
    int r;
    double calcuate()
    {
        return 2 * pi * r;
    }
};

int main()
{
    circle c1;
    c1.r = 10;
    cout << "圆的周长为" << c1.calcuate() << endl;

    system("pause");
    return 0;
}