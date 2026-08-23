class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int asum=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        for(int i=0;i<=nums.size();i++){
            asum+=i;
        }
        return asum-sum;

    }
};