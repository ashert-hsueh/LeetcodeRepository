class Solution {
public:
    std::vector<std::string> result;
    string s;
    vector<string> letterCombinations(string digits) {
        s.clear();
        result.clear();
        if (digits.size() == 0) {
            return result;
        }
        getCombinations(digits, 0);
        return result;
    }
    
    void getCombinations(const string& digits, int index) {
        if (index == digits.size()) {
            result.push_back(s);
            return;
        }
        int digit = digits[index] - '0';
        for (auto i = 0; i < letter_map[digit].size(); ++i) {
            s.push_back(letter_map[digit][i]);
            getCombinations(digits, index + 1);
            s.pop_back();
        }
    }
private:
    const std::vector<std::vector<char>> letter_map = {
            {},
            {},
            {'a', 'b', 'c'},
            {'d', 'e', 'f'},
            {'g', 'h', 'i'},
            {'j', 'k', 'l'},
            {'m', 'n', 'o'},
            {'p', 'q', 'r', 's'},
            {'t', 'u', 'v'},
            {'w', 'x', 'y', 'z'}
        };
};