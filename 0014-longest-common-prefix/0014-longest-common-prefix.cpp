class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        sort(strs.begin(), strs.end());
        string first = strs.front();
        string last = strs.back();
        int match_length = 0;
        for (int i = 0; i < min(first.length(), last.length()); i++) {
            if (first[i] != last[i]) {
                break; 
            }
            match_length++;
        }
        return first.substr(0, match_length);
    }
};