#include <iostream>
using namespace std;

int main()
{
    // int *const p=&a;//const作用在*，指针指向不可以改，指向的值可以改。指针常量
    // const int *p=&a;//const 作用在int,指向的值不可以改，指针指向可以改，即 const int *p-&b;常量指针
    // const 优先作用在左，若左没有，则作用在右
    // const int *const p=&a;指向和值都不能改

    // 1.const修饰指针  常量指针
    int a = 10;
    int b = 20;
    const int *p = &a;
    // 指向的值不可以改，指针指向可以改,*p=20;错误
    p = &b; // 正确

    // 2.const修饰常量  指针常量
    // 指向不可以改，指向的值可以改
    int *const p2 = &a;
    *p2 = 100; // 正确
    // p2 = 100;//错误

    // 3.const修饰指针和常量
    const int *const p3 = &a;
    // 俩者都不可以改
    //*p3 = 100;//错误
    // p3 = &b;//错误

    system("pause");
    return 0;
}