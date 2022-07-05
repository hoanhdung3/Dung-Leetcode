class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        triangle = [[1]]
        for i in range(1, numRows):
            row = [1]
            for j in range(len(triangle[i-1]) - 1):
                row.append(triangle[i-1][j] + triangle[i-1][j-1])
                row.append(1)
                triangle.append(row)
        return triangle
