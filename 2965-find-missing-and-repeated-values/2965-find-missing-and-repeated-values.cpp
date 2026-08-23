class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=n*n;
        vector<int> ans(m+1,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                ans[grid[i][j]]++;
            }
        }
        int rep=-1;
        int mis=-1;
        for(int i=1;i<=m;i++){
            if(ans[i]==0){
                mis=i;
            }else if(ans[i]==2){
                rep=i;
            }
        }
        return{rep,mis};
    }
};