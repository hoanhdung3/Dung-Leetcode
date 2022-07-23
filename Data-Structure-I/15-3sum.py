class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        res = []
        for i in range(len(nums)-2):
            if i!=0 and nums[i]==nums[i-1]:
                continue
            start = i+1
            end = len(nums)-1
            while start<end:
                sum = nums[i]+nums[start]+nums[end]
                if sum==0:
                    res.append([nums[i],nums[start],nums[end]])
                    start+=1
                    end-=1
                    while (start<end) and (nums[start]==nums[start-1]):
                        start+=1
                    while (start<end) and (nums[end]==nums[end+1]):
                        end-=1
                elif sum>0:
                    end-=1
                else:
                    start+=1
        return res
