class Solution {
  public:
    void print(int n){
        if(n==0) return;
        print(n-1);
        cout<<n<<" ";
        
    }
    void printTillN(int n) {
        print(n);
    }
};