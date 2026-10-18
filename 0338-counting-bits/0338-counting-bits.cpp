class Solution {
public:
    int hammingWeight(int n) {
        vector<int> v;
        int a=0;
        while(n>0){
            int r=n%2;
            v.push_back(r);
            n/=2;
        }
        for(int i:v){
            a+=i;
        }
        return a;
    }
    vector<int> countBits(int n) {
        int a=0;
        vector<int> ans;
        for(int i=0;i<=n;i++){
            ans.push_back(hammingWeight(i));
        }
        return ans;
    }
};