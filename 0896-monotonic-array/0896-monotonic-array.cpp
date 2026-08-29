class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool isIncreasing = true;
        bool isDecreasing = true;
        
        // Loop stops at size() - 1 to prevent out-of-bounds when checking i + 1
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                isIncreasing = false;
            }
            if (nums[i] < nums[i + 1]) {
                isDecreasing = false;
            }
        }
        
        return isIncreasing || isDecreasing;
    }
};