class Solution {
public:
    int searchInsert(vector<int>& nums, int k) {
        int l=0;
        int r=nums.size()-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==k){
                return mid;
            }else if(nums[mid]>k){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return l;
    }
};