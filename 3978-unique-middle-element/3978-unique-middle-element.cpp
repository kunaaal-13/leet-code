class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int target=nums[nums.size()/2];
        for(int i=0;i<nums.size();i++){
            if(i==nums.size()/2) continue;
            if(nums[i]==target){
                return false;
            }
        }
        return true;
        
    }
};