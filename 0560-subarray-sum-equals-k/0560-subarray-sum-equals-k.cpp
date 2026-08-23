class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> sum;
        sum[0]=1;
        int current_sum=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            current_sum +=nums[i];
            int need =current_sum-k;
            if(sum.count(need)){
                ans+=sum[need];
            }
            sum[current_sum]++;
        }
        return ans;
    }
};