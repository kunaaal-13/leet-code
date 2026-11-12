class Solution {
public:
    bool cycle(int src,vector<bool>& vis, vector<bool>& recPath,vector<vector<int>>& 
                    prerequisites){
        vis[src]=true;
        recPath[src]=true;
        for(int i=0;i<prerequisites.size();i++){
            int v=prerequisites[i][0];
            int u=prerequisites[i][1];

            if(u==src){
                if(!vis[v]){
                    if(cycle(v,vis,recPath,prerequisites)){
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
    void order(int src,vector<bool>& vis, vector<vector<int>>& prerequisites, stack<int>& s){
        vis[src]=true;
        for(int i=0;i<prerequisites.size();i++){
            int v=prerequisites[i][0];
            int u=prerequisites[i][1];

            if(u==src){
                if(!vis[v]){
                    order(v,vis,prerequisites,s);
                }
            }

        }
        s.push(src);

    }

    vector<int> findOrder(int n, vector<vector<int>>& prerequisites) {
        vector<bool> vis(n,false);
        vector<bool> recPath(n,false);
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                if(cycle(i,vis,recPath,prerequisites)){
                    return ans;
                }
            }
        }


        stack<int> s;
        vector<bool> assign(n,false);
        for(int i=0;i<n;i++){
            if(!assign[i]){
                order(i,assign,prerequisites,s);
            }
        }
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }

        return ans;

        
        
    }
};