class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans;
        int feq=0;
        for(int i=0;i<nums.size();i++){
            if(feq==0){
                ans=nums[i];
            }
            if(nums[i]==ans){
                feq++;
            }else{
                feq--;
            }
        }
        return ans;
    }
};