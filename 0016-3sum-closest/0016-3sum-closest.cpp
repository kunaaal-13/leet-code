class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int sum=nums[0]+nums[1]+nums[2];
        for(int i=0;i<nums.size();i++){
            int st=i+1;
            int end=nums.size()-1;
            while(st<end){
                
                int Csum =nums[i]+nums[st]+nums[end];
                if(abs(target-Csum)<abs(target-sum)){
                    sum=Csum;
                }
                if(Csum<target){
                    st++;
                }else if(Csum>target){
                    end--;
                }else{
                    return Csum;
                }
            }
        }
        return sum;
    }
};