class Solution {
public:
//[1,2,3,9,6,4,2,0]
    int peakIndexInMountainArray(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]) return mid;
            if(nums[mid] > nums[mid+1] && nums[mid]<nums[mid-1]){
                j=mid;
            }
            if(nums[mid]<nums[mid+1] &&nums[mid]>nums[mid-1]){
                i=mid;
            }

        }
        return -1;
        
    }
};