class Solution {
public:
    bool isPowerOfTwo(int m) {
        long long int n =m;
        if(m==0) return false;
        if(m==1) return true;
        while(n%2==0){
            n/=2;
            if(n==1) return true;
        }
        return false;
    }
};