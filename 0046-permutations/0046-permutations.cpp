class Solution {
public:
    void per(vector<int>& nums, vector<vector<int>>& ans,int index){
        if(index==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=index;i<nums.size();i++){
            swap(nums[index],nums[i]);
            per(nums,ans,index+1);
            swap(nums[index],nums[i]);
            // per(nums,ans,i+1);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        per(nums,ans,0);
        return ans;
    }
};