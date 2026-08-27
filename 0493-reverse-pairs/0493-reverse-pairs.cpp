class Solution {
public:
    int count=0;
    void merge(vector<int> &nums,int st,int end,int mid){
        vector<int> temp;
        int i=st;
        int j=mid+1;
        while(i<=mid&&j<=end){
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
    void pairs(vector<int> &nums,int left,int end,int mid){
        int right=mid+1;
        for(int i=left;i<=mid;i++){
            while(right<=end && nums[i]> 2LL*nums[right]){
                right++;
            }
            count += right-(mid+1);
        }
    }
    void mergesort(vector<int> &nums,int st,int end){
        if(st<end){
            int mid=st+(end-st)/2;
            mergesort(nums,st,mid);
            mergesort(nums,mid+1,end);
            pairs(nums,st,end,mid);
            merge(nums,st,end,mid);
        }

    } 
    int reversePairs(vector<int>& nums) {
        count=0;
        mergesort(nums,0,nums.size()-1);
        return count;
    }
};