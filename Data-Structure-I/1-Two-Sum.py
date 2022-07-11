class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        m = {} # val : index
        for index, val in enumerate(nums):
            sub = target - val
            if sub in m:
                return [m[sub], index]
            m[val] = index
        return
