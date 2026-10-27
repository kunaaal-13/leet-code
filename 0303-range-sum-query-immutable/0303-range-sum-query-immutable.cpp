class NumArray {
    vector<int> num;
public:
    NumArray(vector<int>& nums) {
        num.assign(nums.size()+1,0);
        for(int i=0;i<nums.size();i++){
            num[i+1]=num[i]+nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        return (int)(num[right+1]-num[left]);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */