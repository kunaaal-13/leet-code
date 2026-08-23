class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row=matrix[0].size();
        int col=matrix.size();
        for(int i=0;i<row;i++){
            for(int j=i;j<col;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<col;i++){
            int left=0;
            int right=col-1;
            while(left<right){
                swap(matrix[i][left],matrix[i][right]);
                left++;
                right--;
            }
        }
    }
};