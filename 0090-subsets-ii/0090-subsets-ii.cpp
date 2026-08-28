class Solution {
public:
    void ps(vector<int>& nums,vector<int>& tem,int i,vector<vector<int>>& ans){
        if(i==nums.size()){
            ans.push_back(tem);
            return;
        }
        tem.push_back(nums[i]);
        ps(nums,tem,i+1,ans);
        tem.pop_back();
        int index=i+1;
        while(index<nums.size() && nums[i]==nums[index]){
            index++;
        }
        ps(nums,tem,index,ans);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        vector<int> tem;
        vector<vector<int>> ans;
        ps(nums,tem,i,ans);
        return ans;
    }
};