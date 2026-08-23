class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p=0;
        int basep=prices[0];
        for(int i=0;i<prices.size();i++){
            if(basep>prices[i]){
                basep=prices[i];
            }
            p=max(p,prices[i]-basep);
        }
        return p;
    }
};