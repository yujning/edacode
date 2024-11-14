#include <iostream>
using namespace std;

int main()
{
    // 数组定义1
    // 数据类型  数组名[元素个数]
    int score1[2];
    score1[0] = 100;
    score1[1] = 200;

    // 数组定义2
    // 数据类型 数据名[数组长度]={值1，值2...};
    int score2[2] = {100, 200};

    // 数组定义3
    // 数据类型  数组名[]={值1，值2..}；
    int score3[] = {100, 200};
    system("pause");
    return 0;
}