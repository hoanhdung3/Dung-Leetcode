class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        row, col, i = len(matrix), len(matrix[0]) - 1, 0
        while i<row and col > -1:
            if matrix[i][col] == target:
                return True
            elif matrix[i][col] > target:
                col -= 1
            else:
                i += 1
        return False
