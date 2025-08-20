class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> numbers;
        std::stack<string> operand;
        for (auto i = 0; i < tokens.size(); ++i) {
            if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/") {
                auto number2 = numbers.top();
                numbers.pop();
                auto number1 = numbers.top();
                numbers.pop();
                auto temp = number1;
                if (tokens[i] == "+") {
                    temp += number2;
                } else if (tokens[i] == "-") {
                    temp -= number2;
                } else if (tokens[i] == "*") {
                    temp *= number2;
                } else {
                    temp = int(temp / number2);
                }
                numbers.push(temp);
            } else {
                numbers.push(std::stoi(tokens[i]));
            }
        }
        return numbers.top();
    }
};