class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totgas=0;
        int totcos=0;
        int st=0;
        int cg=0;
        for(int i=0;i<gas.size();i++){
            totgas +=gas[i];
            totcos +=cost[i];
            cg +=(gas[i]-cost[i]);
            if(cg<0){
                st=i+1;
                cg=0;
            }
        }
        return totgas<totcos ? -1:st;
    }
};