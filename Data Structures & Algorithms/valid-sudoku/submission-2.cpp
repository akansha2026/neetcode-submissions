class Solution {
    int n ;
public:
    bool isValid(int row, int col, vector<vector<char>> &board){

        char val = board[row][col];
        
        // Row check
        for(int j=0; j<n; j++){
            if(j != col && board[row][j] == val) return false;
        }

        // Col check
        for(int i=0; i<n; i++){
            if(i != row && board[i][col] == val) return false;
        }

        // Box check
        int r = 3 * (row / 3);
        int c = 3 * (col / 3);
        for(int i=r; i<(r+3); i++){
            for(int j=c; j<(c+3); j++){
                if(i == r || j == col) continue;
                if(board[i][j] == val) return false;
            }
        }

        return true;

    }

    bool isValidSudoku(vector<vector<char>>& board) {
        n = board.size();
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(board[i][j] == '.') continue;
            
                bool check = isValid(i, j, board);
                if(!check) return false;

            }
        }

        return true;
    }
};
