class Solution {
public:
    string clearDigits(string s) {
        string c="";
        for(int i=0;i<s.length();i++){
            if(isdigit(s[i])){
                c.pop_back();
            }else{
                c.push_back(s[i]);
            }
        }
        return c;
        
    }
};