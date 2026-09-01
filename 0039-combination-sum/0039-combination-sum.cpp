class Solution {
public:
    void combination(int i,int sum,int target,vector<int>& nums,vector<vector<int>>& ans,vector<int>& temp){
        if(sum>target || i==nums.size()){
            return;
        }
        if(sum==target){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        sum+=nums[i];
        combination(i,sum,target,nums,ans,temp);
        temp.pop_back();
        sum-=nums[i];
        combination(i+1,sum,target,nums,ans,temp);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        combination(0,0,target,nums,ans,temp);
        return ans;
    }
};