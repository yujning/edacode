#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

// 定义逻辑门的枚举类型
enum GateType
{
    AND,
    OR,
    NOT
};

// 逻辑门的结构体
struct LogicGate
{
    GateType type;
    int input1; // 第一个输入的索引
    int input2; // 第二个输入（如果是单输入逻辑门，如NOT，则忽略）
    int output; // 输出信号的索引
};

// 用于模拟组合逻辑电路
class LogicCircuit
{
public:
    LogicCircuit(int numSignals) : signals(numSignals, false) {}

    void addGate(GateType type, int input1, int input2, int output)
    {
        gates.push_back({type, input1, input2, output});
    }

    bool simulate(int iterations)
    {
        unordered_map<int, vector<bool>> history; // 记录每个信号的历史值
        for (int i = 0; i < iterations; ++i)
        {
            // 更新电路中每个门的输出
            for (const auto &gate : gates)
            {
                bool value = false;
                switch (gate.type)
                {
                case AND:
                    value = signals[gate.input1] && signals[gate.input2];
                    break;
                case OR:
                    value = signals[gate.input1] || signals[gate.input2];
                    break;
                case NOT:
                    value = !signals[gate.input1];
                    break;
                }
                signals[gate.output] = value;
            }

            // 记录每个信号的值
            for (int j = 0; j < signals.size(); ++j)
            {
                history[j].push_back(signals[j]);
            }

            // 检查是否发生震荡（如果某个信号在短时间内反复变化）
            if (checkOscillation(history))
            {
                return true; // 发生震荡
            }
        }
        return false; // 无震荡
    }

    void setInputs(const vector<bool> &inputs)
    {
        for (size_t i = 0; i < inputs.size(); ++i)
        {
            signals[i] = inputs[i];
        }
    }

private:
    vector<LogicGate> gates;
    vector<bool> signals;

    bool checkOscillation(const unordered_map<int, vector<bool>> &history)
    {
        const int windowSize = 3; // 检测窗口大小
        for (const auto &[signal, values] : history)
        {
            if (values.size() < windowSize)
                continue;
            // 检查最近windowSize个值是否出现了反复变化
            bool isOscillating = true;
            for (int i = values.size() - windowSize; i < values.size() - 1; ++i)
            {
                if (values[i] == values[i + 1])
                {
                    isOscillating = false;
                    break;
                }
            }
            if (isOscillating)
                return true;
        }
        return false;
    }
};

int main()
{
    // 假设有4个信号，输入和输出都在其中
    LogicCircuit circuit(4);

    // 添加一些逻辑门，增加复杂度以确保有震荡
    circuit.addGate(AND, 0, 1, 2); // input1 AND input2 -> output2
    circuit.addGate(NOT, 2, 0, 3); // NOT output2 -> output3
    circuit.addGate(OR, 1, 3, 2);  // input1 OR output3 -> output2 (可能导致震荡)

    // 遍历所有输入组合
    for (int i = 0; i < (1 << 2); ++i)
    { // 假设有2个输入
        vector<bool> inputs(2);
        for (int j = 0; j < 2; ++j)
        {
            inputs[j] = (i >> j) & 1;
        }

        circuit.setInputs(inputs);

        // 模拟电路并检测震荡
        if (circuit.simulate(1000))
        { // 增加迭代次数
            // 输出导致震荡的输入组合
            cout << "Found oscillation with inputs: ";
            for (int j = inputs.size() - 1; j >= 0; --j)
            {
                cout << inputs[j]; // 逆序输出以便更易读
                if (j > 0)
                    cout << " "; // 添加空格分隔
            }
            cout << endl;
        }
    }

    return 0;
}
