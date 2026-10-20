class Solution {
public:
    int titleToNumber(string columnTitle) {
       int ans=0;
       long long a=1;
       for(int i=columnTitle.size()-1;i>=0;i--){
        int c=columnTitle[i]-'A'+1;
        ans=ans+(c*a);
        a*=26;
       } 
       return ans;
    }
};