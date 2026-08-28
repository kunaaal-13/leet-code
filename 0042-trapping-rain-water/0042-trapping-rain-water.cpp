class Solution {
public:
    int trap(vector<int>& nums) {
        int ans=0;
        int left=0;
        int right=nums.size()-1;
        int left_max=nums[left];
        int right_max=nums[right];
        while(left<right){
            if(nums[left]<nums[right]){
                if(left_max<=nums[left]){
                    left_max=nums[left];
                }else{
                    ans += left_max-nums[left];
                }
                left++;
            }else{
                if(right_max<=nums[right]){
                    right_max=nums[right];
                }else{
                    ans += right_max-nums[right];
                }
                right--;
            }
        }
        return ans;
    }
};