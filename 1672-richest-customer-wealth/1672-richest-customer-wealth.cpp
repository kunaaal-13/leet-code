class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0;
        for(int i=0;i<accounts.size();i++){
            int c_sum=0;
            for(int j=0;j<accounts[0].size();j++){
                c_sum+=accounts[i][j];
            }
            ans=max(ans,c_sum);
        }
        return ans;
    }
};