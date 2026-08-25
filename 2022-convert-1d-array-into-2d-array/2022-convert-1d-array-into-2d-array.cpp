class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& nums, int m, int n) {
        vector<vector<int>> ans;
        if(nums.size()!= m*n){
            return ans;
        }
        int i=0;
        while(i<nums.size()){
            vector<int> row;
            for(int j=0;j<n;j++){
                row.push_back(nums[i]);
                i++;
            }
            ans.push_back(row);
        }
        return ans;
    }
};