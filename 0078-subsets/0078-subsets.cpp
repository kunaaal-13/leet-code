class Solution {
public:
    vector<vector<int>> ans;
    void ps(vector<int>& nums,vector<int>& temp,int i){
        if(i==nums.size()){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        ps(nums,temp,i+1);
        temp.pop_back();
        ps(nums,temp,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        ans.clear();
        int i=0;
        vector<int> temp;
        ps(nums,temp,0);
        return ans;
    }
};