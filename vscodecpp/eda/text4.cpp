
// 提取字符串数字
std::pair<int, int> extractwireNumber(const std::string &str)
{
    std::regex re1(R"(_(\d)+_\d+)"); // 用于提取 re1 的正则表达式
    std::regex re2(R"(_\d+_(\d+))"); // 用于提取 re2 的正则表达式
    std::smatch match;

    int re1Number = -1; // 初始化为 -1，表示未找到
    int re2Number = -1; // 初始化为 -1，表示未找到

    // 提取 re1 匹配的数字
    if (std::regex_search(str, match, re1))
    {
        re1Number = std::stoi(match.str(1)); // 从 re1 提取数字
    }

    // 提取 re2 匹配的数字
    if (std::regex_search(str, match, re2))
    {
        re2Number = std::stoi(match.str(1)); // 从 re2 提取数字
    }

    return {re1Number, re2Number}; // 返回两个数字的 pair
}

// 每个环排序
void sortResultWire(std::vector<std::vector<std::string>> &result_wire)
{
    for (auto &wireVec : result_wire)
    {
        std::sort(wireVec.begin(), wireVec.end(), [](const std::string &a, const std::string &b)
                  {
            auto numbersA = extractwireNumber(a); // 提取 a 的 re1 和 re2 数字
            auto numbersB = extractwireNumber(b); // 提取 b 的 re1 和 re2 数字

            // 判断 re1 是否相等
            if (numbersA.first == numbersB.first) {
                // 如果 re1 相等，则按 re2 排序
                return numbersA.second < numbersB.second;
            }
            // 如果 re1 不相等，按 re1 排序
            return numbersA.first < numbersB.first; });
    }
}
