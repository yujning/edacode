#include <iostream>
using namespace std;

// 继承
// 好处：减少重复代码
// 语法：class 子类：继承方式 父类
// 子类 也称派生类
// 父类 也称基类
class basepage
{
public:
    void header()
    {
        cout << "首页、公开课、登录..." << endl;
    }
    void footer()
    {
        cout << "帮助中心，交流合作..." << endl;
    }
    void left()
    {
        cout << "java,python,c++..." << endl;
    }
};

// java下载页面如下：
class java : public basepage
{
public:
    void content()
    {
        cout << "java学科视频" << endl;
    }
};
void test01()
{
    cout << "java下载页面如下：" << endl;
    java ja;
    ja.header();
    ja.footer();
    ja.left();
    ja.content();
}
// python页面：
class python : public basepage
{
public:
    void content()
    {
        cout << "python学科视频" << endl;
    }
};
void test02()
{
    cout << "python下载页面如下：" << endl;
    python py;
    py.header();
    py.footer();
    py.left();
    py.content();
}

class cpp : public basepage
{
public:
    void content()
    {
        cout << "c++学科视频" << endl;
    }
};
void test03()
{
    cout << "c++下载页面如下：" << endl;
    cpp cpp;
    cpp.header();
    cpp.footer();
    cpp.left();
    cpp.content();
}

int main()
{
    test01();
    test02();
    test03();

    system("pause");
    return 0;
}