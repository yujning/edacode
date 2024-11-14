#include "solver.h"
#include <algorithm>
#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

class Graph
{
public:
    Graph(int vertices, Solver &solver); //
    void addEdge(int src, int dest);     //
    void findCycles();                   // 找环

private:
    int vertices; // 图中顶点数
    vector<vector<int>> adjList;
    Solver &solver; // 引用
    bool dfs(int v, vector<bool> &visited, vector<bool> &recursionStack, vector<int> &path);
};

// 初始化 Solver 引用
Graph::Graph(int vertices, Solver &solver) : solver(solver)
{
    this->vertices = solver.idToInfo.size() - 1;
    adjList.resize(vertices);
    // for (const auto& info : solver.info)
    // {
    //     if (info.isGate)
    //     {
    //         cout << "Gate: " << info.Name << " Ports: ";
    //         for (const auto& port : info.port)
    //         {
    //             cout << port.first << " (" << port.second.first << ", " << port.second.second << ") ";
    //         }
    //         cout << endl;
    //     }
    // }
}

// 添加从src到dest边
void Graph::addEdge(int src, int dest)
{
    adjList[src].push_back(dest);
}

// DFS深度优先搜索 递归
bool Graph::dfs(int v, vector<bool> &visited, vector<bool> &recursionStack, vector<int> &path)
{
    visited[v] = true;
    recursionStack[v] = true;
    path.push_back(v);
    // if (v==18053|v == 18051 || v == 18064 || v == 18063 || v == 18066 || v == 18068 || v == 18070 || v == 18072 || v == 18052 || v == 18050 || v == 18062 || v == 18065 || v == 18067 || v == 18069 || v == 18071 || v == 18073 || v == 18074)
    // if(v)
    // {
    //     cout << "Current vertex: " << v << " Neighbors: ";
    //     for (int neighbor : adjList[v])
    //     {
    //         cout << neighbor << " ";
    //     }
    //     cout << endl;
    // }

    for (int neighbor : adjList[v])
    {
        Info *info = solver.findInfoById(neighbor);

        if (info->isGate)
        {
            // cout << "////Gate: " << info->Name << endl;
            for (auto &port : info->port)
            {
                if (port.second.first == 1)
                {
                    port.second.first = 0;
                }
            }
            info->port[v].first = 1; // 更新端口
            // cout << "////Port: " << v << " " << info->port[v].first <<" "<< info->port[v].second << endl;
        };
        if (!visited[neighbor])
        {
            if (dfs(neighbor, visited, recursionStack, path))
                return true;
        }
        else if (recursionStack[neighbor])
        {

            // Cycle detected, print the cycle
            // cout << neighbor << " ";
            // cout << "Cycle detected: ";
            std::vector<std::string> current_cycle_wire;
            std::vector<std::string> current_cycle_gate;
            auto it = find(path.begin(), path.end(), neighbor);
            for (auto cycleIt = it; cycleIt != path.end(); ++cycleIt)
            {
                Info *info1 = solver.findInfoById(*cycleIt); // 使用 solver.findInfoById
                if (info1)
                {
                    if (info1->isGate)
                    {
                        std::string gate_info = info1->Name + ".port";
                        for (const auto &p : info1->port)
                        {
                            if (p.second.first == 1)
                            {
                                gate_info += std::to_string(p.second.second) + " ";
                            }
                        }
                        current_cycle_gate.push_back(gate_info);
                    }
                    else
                    {
                        current_cycle_wire.push_back(info1->Name);
                    }
                }
                // 将当前循环的 gate 和 wire 信息分别存储到 result_gate 和 result_wire 中
            }
            solver.result_gate.push_back(current_cycle_gate);
            solver.result_wire.push_back(current_cycle_wire);
            current_cycle_wire.clear();
            current_cycle_gate.clear();
            // Info* info_gate = solver.findInfoById(neighbor);
            // if (info_gate->isGate)
            // {
            //     cout << "Gate: " << info_gate->Name << " "<<info_gate->port[v].first << " " << info_gate->port[v].second << endl;
            //     info_gate->port[v].first = 0; // 更新端口
            //     cout << "Gate: " << info_gate->Name << " "<<info_gate->port[v].first << " " << info_gate->port[v].second << endl;
            // };
            // cout << neighbor << endl; // To complete the cycle
        }
    }

    // Info* info_v = solver.findInfoById(v);
    // info_v->port[v].first = 0; // 更新端口
    recursionStack[v] = false;
    path.pop_back(); // Remove the vertex from the path
    return false;    // No cycle found in this path
}

// 找环
void Graph::findCycles()
{
    // 顶点访问状态
    vector<bool> visited(vertices, false);
    // 递归栈
    vector<bool> recursionStack(vertices, false);
    // 路径
    vector<int> path;
    // 打印adjList
    //  for (int i = 0; i < adjList.size(); ++i) {
    //      cout << "id " << i << ": ";
    //      for (int neighbor : adjList[i]) {
    //          cout << neighbor << " ";
    //      }
    //      cout << endl;
    //  }

    // for (const auto& info : solver.info)
    // {
    //     if (info.isGate)
    //     {
    //         cout << "Gate: " << info.Name << " Ports: ";
    //         for (const auto& port : info.port)
    //         {
    //             cout << port.first << " (" << port.second.first << ", " << port.second.second << ") ";
    //         }
    //         cout << endl;
    //     }
    // }

    // 访问所有顶点
    for (int i = 0; i < vertices; i++)
    {
        // 未被访问
        if (!visited[i])
        {
            dfs(i, visited, recursionStack, path);
        }
    }
    // for (int i = 0; i < solver.pi_id.size(); i++)
    // {
    //     dfs(solver.pi_id[i], visited, recursionStack, path);
    //     //cout << "PI ID: " << solver.pi_id[i] << endl;
    // }
    // cout << "Cycle search completed." << endl;

    // for(int i=0;i<solver.idToInfo.size();i++)
    // {
    //     Info* info = solver.findInfoById(i);
    //     if (info->isGate)
    //     {
    //         cout << "Gate: " << info->Name << " Ports: ";
    //         for (const auto& port : info->port)
    //         {
    //             cout << port.first << " (" << port.second.first << ", " << port.second.second << ") ";
    //         }
    //         cout << endl;
    //     }
    // }
}

// 初始化图
void init_graph(Graph &g, const vector<Info> &info)
{
    // 遍历向量
    for (int i = 0; i < info.size();)
    {
        // 门
        if (info[i].isGate)
        {
            if (info[i].GateType == "not1")
            {
                g.addEdge(info[i].id, info[i + 1].id);
                g.addEdge(info[i + 2].id, info[i].id);
                i += 3;
            }
            else
            {
                g.addEdge(info[i].id, info[i + 1].id);
                g.addEdge(info[i + 2].id, info[i].id);
                g.addEdge(info[i + 3].id, info[i].id);
                i += 4;
            }
        }
    }
}