class Solution {
public:
    int maxArea(vector<int>& nums) {
                int ans=0;
        int st=0;
        int end=nums.size()-1;
        int h=0;
        while(st<end){
            h=min(nums[st],nums[end]);
            ans=max(ans,h*(end-st));
            if(nums[st]>=nums[end]){
                end--;
            }else{
                st++;
            }
        }
        return ans;
        
    }
};