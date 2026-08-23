class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> sum;
        vector<int> ans;
        int need=0;
        for(int i=0;i<nums.size();i++){
            need=target-nums[i];
            if(sum.count(need)){
                ans.push_back(i);
                ans.push_back(sum[need]);
                return {i,sum[need]};
            }
            sum[nums[i]]=i;
        }
        return ans;
    }
};