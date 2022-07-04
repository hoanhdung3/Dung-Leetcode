// solution 1:
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if(mat.size()*mat[0].size() != r*c) return mat;
        vector<vector<int>> reshape;
        int index = 0;
        vector<int> row;
        for(int i=0; i<mat.size(); ++i){
            for(int j=0; j<mat[i].size(); ++j){
                row.push_back(mat[i][j]);
                index++;
                
                if(index==c){
                    reshape.push_back(row);
                    index = 0;
                    row.clear();
                }
            }
        }
        return reshape;
    }
};

// solution 2:
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if(mat.size()*mat[0].size() != r*c) return mat;
        vector<vector<int>> reshape(r, vector<int>(c));
        int rows = 0, cols = 0;;
        for(int i=0; i<mat.size(); ++i){
            for(int j=0; j<mat[i].size(); ++j){
                if(cols == c){
                    cols = 0;
                    rows++;
                }
                reshape[rows][cols] = mat[i][j];
                cols++;
            }
        }
        return reshape;
    }
};
