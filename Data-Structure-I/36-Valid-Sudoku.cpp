class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;++i){
            vector<int> row(10,0), col(10,0), sub_box(10,0);
            for(int j=0;j<9;++j){
                
                if(board[i][j] != '.'){
                    int value = board[i][j] - '0';
                    row[value]++;
                    if(row[value]>1) return false;
                }
                
                if(board[j][i]!='.'){
                    int value = board[j][i] - '0';
                    col[value]++;
                    if(col[value]>1) return false;
                }
                
                int x = 3*(i/3) + j/3, y = 3*(i%3) + j%3;
                if(board[x][y]!= '.'){
                    int value = board[x][y] - '0';
                    sub_box[value]++;
                    if(sub_box[value]>1) return false;
                }
            }
        }
        return true;
    }
};
