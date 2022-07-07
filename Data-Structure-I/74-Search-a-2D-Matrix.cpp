class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size(), col = matrix[0].size() - 1, i = 0;
        while(i<row && col>-1){
            if(matrix[i][col] == target) return true;
            else if(matrix[i][col] > target) col--;
            else i++;
        }
        return false;
    }
};
