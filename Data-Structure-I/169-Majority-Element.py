# solution 1:
class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        m = {}
        ans, max_count = 0, 0
        for i in nums:
            m[i] = 1 + m.get(i, 0)
            ans = i if max_count<m[i] else ans
            max_count = max(max_count, m[i])
        return ans

# solution 2:
class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        ans, count = nums[0], 1
        for i in range(1, len(nums)):
            if ans==nums[i]:
                count+=1
            else:
                count-=1
            if count==0:
                count = 1
                ans = nums[i]
        return ans
