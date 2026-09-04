class Solution {
public:
    bool isValid(vector<vector<char>>& board, int row,int col,char dig){
        for(int i=0;i<9;i++){
            if(board[row][i]==dig){
                return false;
            }
        }
        for(int i=0;i<9;i++){
            if(board[i][col]==dig){
                return false;
            }
        }
        int sr=(row/3)*3;
        int sc=(col/3)*3;
        for(int i=sr;i<=sr+2;i++){
            for(int j=sc;j<=sc+2;j++){
                if(board[i][j]==dig){
                    return false;
                }
            }
        }

        return true;

        
    }
    bool solve(vector<vector<char>>& board, int row,int col){
        if(row==9){
            return true;
        }


        int next_row=row;
        int next_col=col+1;
        if(next_col==9){
            next_row++;
            next_col=0;
        }


        if(board[row][col]!='.'){
            return solve(board,next_row,next_col);
        }


        for(char j='1';j<='9';j++){
            if(isValid(board,row,col,j)){
                board[row][col]=j;
                if(solve(board,next_row,next_col)){
                    return true;
                }
                board[row][col]='.';
            }
            
        }


        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board,0,0);
    }
};