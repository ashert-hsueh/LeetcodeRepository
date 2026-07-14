class Solution {
public:
    bool isValid(string s) {
        std::stack<char> ss;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                ss.push(s[i]);
            } else {
                if (ss.empty()) {
                    return false;
                }
                if (ss.top() == '(' && s[i] == ')') {
                    ss.pop();
                } else if (ss.top() == '[' && s[i] == ']') {
                    ss.pop();
                } else if (ss.top() == '{' && s[i] == '}') {
                    ss.pop();
                } else {
                    return false;
                }
            }
        }
        if (ss.empty()) {
            return true;
        } else {
            return false;
        }
    }
};