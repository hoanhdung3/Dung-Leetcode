class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        ans = []
        intervals.sort(key=lambda x:x[0]) # sort by x[0]
        beg = intervals[0][0]
        end = intervals[0][1]
        for i in intervals:
            if i[0] <= end:
                end = max(end, i[1])
            else:
                ans.append([beg, end])
                beg = i[0]
                end = i[1]
        ans.append([beg, end])
        return ans
        
