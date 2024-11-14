#include <iostream>
#include <regex>
#include <string>

int main()
{
    std::regex pattern(R"(_0+_)"); // 正则表达式 "_0+_"

    // 测试的字符串
    std::string test1 = "_007_007";
    std::string test2 = "_00_";
    std::string test3 = "_01_";
    std::string test4 = "_000_1";
    std::string test5 = "w_000_";
    std::string test6 = "_000_";

    // 测试函数
    auto testMatch = [&](const std::string &str)
    {
        if (std::regex_match(str, pattern))
        {
            std::cout << str << " 符合正则表达式\n";
        }
        else
        {
            std::cout << str << " 不符合正则表达式\n";
        }
    };

    // 逐个测试
    testMatch(test1);
    testMatch(test2);
    testMatch(test3);
    testMatch(test4);
    testMatch(test5);
    testMatch(test6);

    return 0;
}
