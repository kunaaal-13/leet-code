class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int n=nums.size();
        int i=0;
        int j=n-1;
        while(i<=j){
            int mid= i+(j-i)/2;
            if(mid==0 && nums[0]!=nums[1]) return nums[0];
            if(mid==(n-1) && nums[n-1] != nums[n-2]) return nums[n-1];
            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]) return nums[mid];
            if(mid%2==0){
                if(nums[mid]==nums[mid-1]){
                    j=mid-1;
                }else{
                    i=mid+1;
                }
            }else{
                if(nums[mid]==nums[mid-1]){
                    i=mid+1;
                }else{
                    j=mid-1;
                }
            }
        }
        return -1;
    }
};