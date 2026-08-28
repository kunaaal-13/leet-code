class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        vector<int> temp(26,0);
        for(int i=0;i<s.length();i++){
            temp[s[i]-'a']++;
            temp[t[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(temp[i]!=0) return false;
        }
        return true;
    }
};