class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        l, r = 0, len(matrix) - 1
        while l<r:
            for i in range(r-l):
                t, b = l, r
                topLeft = matrix[t][l+i]
                matrix[t][i+l] = matrix[b-i][l] # bottomLeft to topLeft
                matrix[b-i][l] = matrix[b][r-i] # bottomRight to bottomLeft
                matrix[b][r-i] = matrix[t+i][r] # topRight to bottomRight
                matrix[t+i][r] = topLeft # topRight to topLeft
            r -= 1
            l += 1
