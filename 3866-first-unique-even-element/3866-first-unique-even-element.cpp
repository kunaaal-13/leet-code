class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0 && map[nums[i]]==1){
                return nums[i];
            }
        }
        return -1;
    }
};