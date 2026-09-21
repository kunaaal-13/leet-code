class Solution {
public:
    string reverseOnlyLetters(string s) {
        int left = 0;
        int right = s.length() - 1;
        
        while (left < right) {
            // Skip non-letters from the left
            if (!isalpha(s[left])) {
                left++;
            } 
            // Skip non-letters from the right
            else if (!isalpha(s[right])) {
                right--;
            } 
            // Both are letters, so we swap them
            else {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        
        return s;
    }
};