class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        beg, run, end = 0, 0, len(nums) - 1;
        while run <= end:
            if nums[run] == 2:
                tmp = nums[end]
                nums[end] = nums[run]
                nums[run] = tmp
                end -= 1
            elif nums[run] == 0:
                tmp = nums[beg]
                nums[beg] = nums[run]
                nums[run] = tmp
                run += 1
                beg += 1
            else:
                run += 1
