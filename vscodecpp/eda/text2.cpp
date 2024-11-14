#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

// 定义逻辑门类型
enum GateType
{
    AND,
    OR,
    NOT
};

// 门的结构
struct Gate
{
    GateType type;
    vector<int> inputs; // 输入信号的索引
};

// 电路类
class Circuit
{
public:
    void addInput(const string &name)
    {
        inputs.push_back(name);
    }

    void addGate(GateType type, const vector<int> &inputs)
    {
        gates.push_back({type, inputs});
    }

    string toFormula()
    {
        vector<string> formulas; // 存储每个门的公式
        for (size_t i = 0; i < gates.size(); ++i)
        {
            const Gate &gate = gates[i];
            string formula;

            // 处理门类型
            if (gate.type == NOT)
            {
                formula = "NOT " + inputs[gate.inputs[0]];
            }
            else
            {
                formula = "(";
                // 处理输入
                for (size_t j = 0; j < gate.inputs.size(); ++j)
                {
                    if (j > 0)
                    {
                        formula += (gate.type == AND ? " AND " : " OR ");
                    }
                    formula += inputs[gate.inputs[j]];
                }
                formula += ")";
            }
            formulas.push_back(formula);
        }

        // 结合所有门的公式，返回最后一个门的结果
        return formulas.back();
    }

private:
    vector<string> inputs; // 输入信号名称
    vector<Gate> gates;    // 门
};

int main()
{
    Circuit circuit;

    // 添加输入
    circuit.addInput("A");
    circuit.addInput("B");
    circuit.addInput("D");

    // 添加逻辑门
    circuit.addGate(AND, {0, 1}); // C = A AND B
    circuit.addGate(OR, {2, 0});  // E = D OR C
    circuit.addGate(NOT, {1});    // F = NOT B

    // 转换为布尔公式
    string formula = circuit.toFormula();
    cout << "Boolean Formula: " << formula << endl;

    return 0;
}
