class Solution {
public:
    vector<int> plusOne(vector<int>& nums) {
        vector<int> ans;
        int a=0;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]==9){
                nums[i]=0;
            }else{
                a=1;
                nums[i]++;
                for(int i=0;i<nums.size();i++){
                    ans.push_back(nums[i]);
                }
                break;
            }
        }
        if(a==0){
            ans.push_back(1);
            for(int i=0;i<nums.size();i++){
                    ans.push_back(nums[i]);
                }
        }
        return ans;
    }
};