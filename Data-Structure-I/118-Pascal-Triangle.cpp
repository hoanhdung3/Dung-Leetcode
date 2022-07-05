class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        for(int i=0; i<numRows; ++i){
            vector<int> col;
            for(int j=0; j<=i; ++j){
                if(j==0 || j==i) 
                    col.push_back(1);
                else
                    col.push_back(triangle[i-1][j] + triangle[i-1][j-1]);
            }
            triangle.push_back(col);
        }
        return triangle;
    }
};
