class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        arr = [1]
        for i in range(1, rowIndex+1):
            arr.append(int(arr[i-1] * (rowIndex - (i-1)) / i))
        return arr
        
