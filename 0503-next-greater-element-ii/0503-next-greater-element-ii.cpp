class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,-1);
        stack<int> next;
        for(int i=2*n-1;i>=0;i--){
            int cur=i%n;
            while(next.size()>0 && nums[cur]>=next.top() ){
                next.pop();
            }
            if(next.size()==0){
                ans[cur]=-1;
            }else{
                ans[cur]=next.top();
            }

            next.push(nums[cur]);
        }
        return ans;
    }
};