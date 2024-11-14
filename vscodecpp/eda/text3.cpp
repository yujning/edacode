// 提取字符串数字
int extractwireNumber(const std::string &str)
{
    std::regex re1(R"(_(\d)+_\d+)");
    // std::regex re2(R"(_\d+_(\d+))");
    std::smatch match;
    if (std::regex_search(str, match, re1))
    {
        return std::stoi(match.str(1));
    }
    // if (std::regex_search(str, match, re2)) {
    //     return std::stoi(match.str(1));
    // }
    return -1;
}

void sortResultWire(std::vector<std::vector<std::string>> &result_wire)
{
    for (auto &wireVec : result_wire)
    {
        std::sort(wireVec.begin(), wireVec.end(), [this](const std::string &a, const std::string &b)
                  {
            
            int numA = extractwireNumber(a); // 提取 a 的 re1 数字
            int numB = extractwireNumber(b); // 提取 b 的 re1 数字

            // 判断 re1 是否相等
            if (numA == numB) {
                // 提取 re2 数字
                std::regex re2(R"(_\d+_(\d+))");
                std::smatch matchA, matchB;
                
                int re2_A = (std::regex_search(a, matchA, re2)) ? std::stoi(matchA.str(1)) : -1;
                int re2_B = (std::regex_search(b, matchB, re2)) ? std::stoi(matchB.str(1)) : -1;

                // 如果 re1 相等，则按 re2 排序
                return re2_A < re2_B;
            }
            // 如果 re1 不相等，按 re1 排序
            return numA < numB; });
    }
}