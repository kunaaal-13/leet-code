class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int one=0;
        int two=0;
        int ans=0;
        unordered_set<char> window;
        while(two<s.length()){
            if(window.find(s[two])==window.end()){
                window.insert(s[two]);
                ans=max(ans,two-one+1);
                two++;
            }else{
                window.erase(s[one]);
                one++;
            }
        }
        return ans;
        
    }
};