class Solution {
public:

int ans = 0;

bool isValid(vector<string> board, int row, int col){
        for(int i = row; i>=0; i--) {
            if(board[i][col] == 'Q')
                return false;
        }
        
        //check left diagonal upwards
        for(int i = row, j = col; i>=0 && j >= 0; i--, j--) {
            if(board[i][j] == 'Q')
                return false;
        }
        
        //check right diagonal upwards
        for(int i = row, j = col; i>=0 && j<board.size(); i--, j++) {
            if(board[i][j] == 'Q')
                return false;
        }
        return true;
    }

    void solve(vector<string> board, int row){
        if( row == board.size()){
            ans++;
            return;
        }
        for(int i=0; i<board.size(); i++){
            if(isValid(board, row, i)){
                board[row][i] = 'Q';
                solve(board, row+1);
                board[row][i] = '.';
            }
        }
    }

    int totalNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        if(!n){
            return 0;
        }
        solve(board, 0);
        return ans;
    }
};