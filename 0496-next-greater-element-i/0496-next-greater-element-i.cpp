class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int,int> store;
        stack<int> s;
        for(int i=nums2.size()-1;i>=0;i--){
            while(s.size()>0 && nums2[i]>=s.top()){
                s.pop();
            }
            if(s.size()==0){
                store[nums2[i]]=-1;
            }else{
                store[nums2[i]]=s.top();
            }
            s.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++){
            ans.push_back(store[nums1[i]]);
        }
        return ans;
        
    }
    
};