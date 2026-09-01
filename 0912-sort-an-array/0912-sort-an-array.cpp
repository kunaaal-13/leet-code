class Solution {
public:
    void merge(vector<int>& nums,int st,int end,int mid){
        vector<int> temp;
        int i=st;
        int j=mid+1;
        while(i<=mid && j<=end){
            if(nums[i]>nums[j]){
                temp.push_back(nums[j]);
                j++;
            }else{
                temp.push_back(nums[i]);
                i++;
            }
        }
        while(i<=mid){
            temp.push_back(nums[i]);
            i++;
        }
        while(j<=end){
            temp.push_back(nums[j]);
            j++;
        }
        for(int k=0;k<temp.size();k++){
            nums[st+k]=temp[k];
        }
    } 
    void plus(vector<int>& nums,int st,int end){
        if(st<end){
            int mid=st+(end-st)/2;
            plus(nums,st,mid);
            plus(nums,mid+1,end);

            merge(nums,st,end,mid);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        int st=0;
        int end=nums.size()-1;
        plus(nums,st,end);
        return nums;
        
    }
};