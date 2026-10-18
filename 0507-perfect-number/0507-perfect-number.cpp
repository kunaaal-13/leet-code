class Solution {
public:
    bool checkPerfectNumber(int n) {
        int a=0;
        vector<int> ans;
        for(int i=1;i<(n/2+1);i++){
            if(n%i==0){
                ans.push_back(i);
                a+=i;
            }
        }
        return a==n;
    }
};