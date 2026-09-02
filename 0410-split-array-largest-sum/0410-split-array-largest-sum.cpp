class Solution {
public:
    bool isValid(vector<int>& nums, int k,int mid){
        int sub_arr=1;
        int add=0;
        for(int i=0;i<nums.size();i++){
            if(mid<nums[i]) return false;
            if(add+nums[i]<=mid){
                add+=nums[i];
            }else{
                sub_arr++;
                add=nums[i];
            }
        }
        if(sub_arr>k){
            return false;
        }else{
            return true;
        }
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int sum=0;
        for(int el:nums){
            sum+=el;
        }
        int st=0;
        int end=sum;
        int ans=0;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(isValid(nums,k,mid)){
                ans=mid;
                end=mid-1;
            }else{
                st=mid+1;
            }
        }
        return ans;
        
    }
};