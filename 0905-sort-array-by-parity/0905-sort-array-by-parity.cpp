class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> ans(nums.size());
        int k=0;
        int j=nums.size()-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                ans[k]=nums[i];
                k++;
            }else{
                ans[j]=nums[i];
                j--;
            }
        }
        return ans;
    }
};