class Solution {
public:
    string reverseWords(string s) {
        stringstream line(s);
        string word;
        vector<string> words;
        while(line>>word){
            words.push_back(word);
        }
        string ans="";
        for(int i=words.size()-1;i>=0;i--){
            ans +=words[i];
            if(i>0){
                ans += " ";
            }
        }
        return ans;
    }
};