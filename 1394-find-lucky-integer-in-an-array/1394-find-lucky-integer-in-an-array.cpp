class Solution {
public:
    int findLucky(vector<int>& arr) {
        int ans=-1;
        for(int i=0;i<arr.size();i++){
            int count =0;
            for(int j=0;j<arr.size();j++){
                if(arr[i]==arr[j]){
                    count++;
                }
            }
            if(count==arr[i]){
                ans=max(ans,arr[i]);
            }
        }
        return ans;
        
    }
};