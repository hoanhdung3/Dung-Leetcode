# solution 1:
class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        ans = []
        nums1.sort()
        nums2.sort()
        i, j = 0, 0
        while i < len(nums1) and j < len(nums2):
            if nums1[i] == nums2[j]:
                ans.append(nums1[i])
                i+=1
                j+=1
            elif nums1[i] > nums2[j]:
                j+=1
            else:
                i+=1
        return ans

# solution 2:
class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        if len(nums1) > len(nums2):
            return self.intersect(nums2, nums1)
        map1, map2 = { n : nums1.count(n) for n in set(nums1) }, { n : nums2.count(n) for n in set(nums2) }
        ans = []
        
        for i in map1:
            if i in map2:
                ans += [i] * min(map1[i], map2[i])
        return ans
