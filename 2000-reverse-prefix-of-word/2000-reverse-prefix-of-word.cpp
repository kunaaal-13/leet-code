class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char> s;
        int a=0;
        for(int i=0;i<word.length();i++){
            s.push(word[i]);
            if(word[i]==ch){
                a=1;
                break;
            }
        }
        int i=0;
        if(a==0){
            return word;
        }
        while(!s.empty()){
            word[i]=s.top();
            s.pop();
            i++;
        }
        return word;
    }
};