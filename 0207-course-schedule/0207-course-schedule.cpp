class Solution {
public:
    bool helper(int src,vector<bool>& vis, vector<bool>& recPath,vector<vector<int>>& 
                    prerequisites){
        vis[src]=true;
        recPath[src]=true;
        for(int i=0;i<prerequisites.size();i++){
            int v=prerequisites[i][0];
            int u=prerequisites[i][1];

            if(u==src){
                if(!vis[v]){
                    if(helper(v,vis,recPath,prerequisites)){
                        return true;
                    }
                }else if(recPath[v]){
                    return true;
                }
            }

        }
        recPath[src]=false;
        return false;

    }
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        vector<bool> vis(n,false);
        vector<bool> recPath(n,false);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                if(helper(i,vis,recPath,prerequisites)){
                    return false;
                }
            }
        }
        return true;
    }
};