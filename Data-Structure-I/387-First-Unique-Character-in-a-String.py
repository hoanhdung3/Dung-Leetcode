# solution 1:
class Solution:
    def firstUniqChar(self, s: str) -> int:
        string_map = {}
        for i in s:
            if i not in  string_map:
                string_map[i] = 1
            else:
                string_map[i] += 1
        for i in range(len(s)):
            if string_map[s[i]]==1:
                return i
        return -1

# solution 2:
class Solution:
    def firstUniqChar(self, s: str) -> int:
        from collections import Counter
        string_map = Counter(s)
        for k, v in string_map.items():
            if v == 1:
                return s.index(k)
        return -1
