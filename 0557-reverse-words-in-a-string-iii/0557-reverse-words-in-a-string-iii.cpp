class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        int n = s.length();
        
        while (i < n) {
            if (s[i] != ' ') {
                int j = i;
                
                while (j < n && s[j] != ' ') {
                    j++;
                }
                int left = i;
                int right = j - 1;
                
                while (left < right) {
                    std::swap(s[left], s[right]);
                    left++;
                    right--;
                }
                i = j; 
            } else {
                i++;
            }
        }
        
        return s;
    }
};