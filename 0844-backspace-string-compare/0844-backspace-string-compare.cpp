class Solution {
public:
    string buildString(std::string str) {
        string result = "";
        
        for (int i = 0; i < str.length(); i++) {
            if (str[i] != '#') {
                result.push_back(str[i]);
            } else if (!result.empty()) {
                result.pop_back();
            }
        }
        
        return result;
    }

    bool backspaceCompare(std::string s, std::string t) {
        return buildString(s) == buildString(t);
    }
};