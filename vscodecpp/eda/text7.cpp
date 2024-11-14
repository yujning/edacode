#include <algorithm>
#include <cstdint>
#include <ctime>
#include <iostream>
#include <regex>
#include <set>
#include <string>
#include <unordered_map>
#include <vector>

// solver.h
#ifndef SOLVER_H
#define SOLVER_H

// 定义 StrVec 类型
typedef std::vector<std::string> StrVec;

// 定义 GateInst 类
class GateInst
{
public:
    GateInst(const char *pName)
    {
        _instName = pName ? pName : "Unknown";
    }

    void setGateType(const char *pName)
    {
        _gateType = pName ? pName : "Unknown";
    }

    void addNodeName(const char *pName)
    {
        _instNodes.push_back(pName ? pName : "Unknown");
    }

    void dumpInst()
    {
        printf("%-5s  %s  ", _gateType.c_str(), _instName.c_str());
        for (unsigned ii = 0; ii != _instNodes.size(); ++ii)
        {
            printf("%s  ", _instNodes[ii].c_str());
        }
        printf("\n");
    }

    std::string _gateType;
    std::string _instName;
    StrVec _instNodes;
};

// 定义 GateInstVec 类型
typedef std::vector<GateInst *> GateInstVec;

class Info
{
public:
    std::string Name;     // 名称
    bool isGate;          // 判断门
    std::string GateType; // 门种类
    int id;               // 索引
    // 无序映射          KEY   VALUE
    std::unordered_map<int, std::pair<int, int>> port;
    // uint8_t WireInfo;
};

// 类型别名
typedef std::vector<Info> InfoVec;

class Solver
{
public:
    std::vector<std::vector<std::string>> result_wire;
    std::vector<std::vector<std::string>> result_gate;

    InfoVec info;
    // 映射 哈希
    std::unordered_map<int, Info> idToInfo;
    std::vector<int> pi_id;
    // void add_pi_id(const std::vector<Info>& info)
    // {
    //     std::regex pattern(R"(_0+_)"); // 匹配 _ 之间全为零的模式
    //     for (const auto& item : info)
    //     {
    //         if (std::regex_search(item.Name, pattern))
    //         {
    //             pi_id.push_back(item.id);
    //         }
    //     }
    //     std::set<int> unique_ids(pi_id.begin(), pi_id.end());
    //     pi_id.assign(unique_ids.begin(), unique_ids.end());
    //     // int i=0;
    //     // for (const auto& id : pi_id)
    //     // {
    //     //     std::cout << i<< " PI ID: " << id << std::endl;
    //     //     i++;
    //     // }
    // }

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

    // 每个环排序
    // void sortResultWire(std::vector<std::vector<std::string>>& result_wire) {
    //     for (auto& wireVec : result_wire) {
    //         std::sort(wireVec.begin(), wireVec.end(), [this](const std::string& a, const std::string& b)
    //          {
    //             return extractwireNumber(a) < extractwireNumber(b);
    //         });
    //     }
    // }

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
    } // yjn

    // Helper function to extract the number between the underscore and ".port"
    int extractGateNumber(const std::string &str)
    {
        std::regex re(R"(_(\d+)\.port)");
        std::smatch match;
        if (std::regex_search(str, match, re))
        {
            return std::stoi(match.str(1));
        }
        return -1;
    }

    // Function to sort result_gate
    void sortResultGate(std::vector<std::vector<std::string>> &result_gate)
    {
        for (auto &gateVec : result_gate)
        {
            std::sort(gateVec.begin(), gateVec.end(), [this](const std::string &a, const std::string &b)
                      { return extractGateNumber(a) < extractGateNumber(b); });
        }
    }

    void sortResults()
    {
        sortResultWire(result_wire);
        sortResultGate(result_gate);
    }
    void dumpResults() const
    {
        // 打印 result_wire 的内容
        for (int i = 0; i < result_wire.size(); i++)
        {
            std::cout << i + 1 << ")" << std::endl;
            std::cout << "Loop Signals: ";
            for (const auto &signal : result_wire[i])
            {
                std::cout << signal << ", ";
            }
            std::cout << std::endl;
            std::cout << "Loop Gates: ";
            for (const auto &gate : result_gate[i])
            {
                std::cout << gate << ", ";
            }
            std::cout << std::endl;
        }
    }

    // std::vector<GateInst*> GateInstVec;
    void addInfo(const GateInstVec &inst)
    {
        std::unordered_map<std::string, int> nameToIdMap;
        int currentId = 0;
        std::regex pattern(R"(_0+_)"); // 匹配 _ 之间全为零的模式

        for (unsigned i = 0; i < inst.size(); i++)
        {
            Info temp;
            temp.Name = inst[i]->_instName;
            temp.isGate = true;
            temp.GateType = inst[i]->_gateType;

            // 分配或获取 id
            if (nameToIdMap.find(temp.Name) == nameToIdMap.end())
            {
                nameToIdMap[temp.Name] = currentId++;
            }
            temp.id = nameToIdMap[temp.Name];

            info.push_back(temp);
            idToInfo[temp.id] = temp; // 将 Info 对象存储到 idToInfoMap 中

            int n = inst[i]->_instNodes.size();
            for (int j = 0; j < n; j++)
            {
                Info temp;
                temp.Name = inst[i]->_instNodes[j];
                temp.isGate = false;

                // 分配或获取 id
                if (nameToIdMap.find(temp.Name) == nameToIdMap.end())
                {
                    nameToIdMap[temp.Name] = currentId++;
                }
                temp.id = nameToIdMap[temp.Name];

                info.push_back(temp);
                idToInfo[temp.id] = temp; // 将 Info 对象存储到 idToInfoMap 中

                // 检查是否符合 _ 之间全为零的模式
                if (std::regex_search(temp.Name, pattern))
                {
                    pi_id.push_back(temp.id);
                }

                int ii = info.size() - 2 - j;
                if (j == 1)
                {
                    info[ii].port[temp.id].second = 1;
                    idToInfo[info[ii].id] = info[ii]; // 更新 idToInfo 映射
                }
                if (j == 2)
                {
                    info[ii].port[temp.id].second = 2;
                    idToInfo[info[ii].id] = info[ii]; // 更新 idToInfo 映射
                }
            }
        }
        // add_pi_id(info);

        // for (const auto& id : pi_id)
        // {
        //     std::cout << "PI ID: " << id << std::endl;
        // }
    }

    // 通过 id +查找 Info 对象
    Info *findInfoById(int id)
    {
        auto it = idToInfo.find(id);
        if (it != idToInfo.end())
        {
            return &it->second;
        }
        return nullptr; // 如果找不到，返回 nullptr
    }

    // 打印信息
    void dumpInfo()
    {
        for (unsigned i = 0; i != info.size(); i++)
        {
            if (info[i].isGate)
            {
                std::cout << "Gate: " << info[i].Name << " " << info[i].GateType << " id " << info[i].id << std::endl;
            }
            else
            {
                std::cout << "Wire: " << info[i].Name << info[i].GateType << " id " << info[i].id << std::endl;
            }
        }
    }
};

#endif // SOLVER_H