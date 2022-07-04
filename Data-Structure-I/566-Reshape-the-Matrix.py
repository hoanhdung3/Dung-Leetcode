# solution 1:
class Solution:
    def matrixReshape(self, mat: List[List[int]], r: int, c: int) -> List[List[int]]:
        if len(mat)*len(mat[0]) != r*c:
            return mat
        reshape = []
        row = [] 
        index = 0
        for i in mat:
            for j in i:
                row.append(j)
                index += 1
                if index == c:
                    reshape.append(row)
                    row = []
                    index = 0
        return reshape

# solution 2:
class Solution:
    def matrixReshape(self, mat: List[List[int]], r: int, c: int) -> List[List[int]]:
        if len(mat)*len(mat[0]) != r*c:
            return mat
        reshape = [[None for x in range(c)] for y in range(r)]
        
        i, j = 0, 0
        
        for row in range(r):
            for col in range(c):
                reshape[row][col] = mat[i][j]
                j += 1
                
                if j == len(mat[0]):
                    i += 1
                    j = 0
        return reshape
