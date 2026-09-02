class Solution {
public:
    bool isValid(vector<int>& position, int m,int mid){
        int ball=1;
        int last_ball=position[0];
        for(int i=1;i<position.size();i++){
            if(position[i]-last_ball>=mid){
                ball++;
                last_ball=position[i];
            }
            if(ball==m) return true;
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n=position.size();
        int st=0;
        int end=position[n-1]-position[0];
        int ans=1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(isValid(position,m,mid)){
                ans=mid;
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
        return ans;
        
    }
};