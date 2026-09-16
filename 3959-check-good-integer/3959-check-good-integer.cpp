class Solution {
public:
    bool checkGoodInteger(int n) {
        int sum=0;
        int sq=0;
        while(n!=0){
            int dig=n%10;
            sum+=dig;
            sq+=(dig*dig);
            n=n/10;
        }
        if((sq-sum)>=50){
            return true;
        }
        return false;
    }
};