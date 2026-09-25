class Solution {
public:
    string reverseStr(string s, int k) {
        int n=s.size();
        int i=0;
        int j=0;
        for(int start =0;start< n; start += 2 * k){
            i=start;
            int j = min(n - 1, start + k - 1);
            while(i<j){
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};