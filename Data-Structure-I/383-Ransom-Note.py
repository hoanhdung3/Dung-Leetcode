class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        c = Counter(magazine)
        for i in ransomNote:
            if i in c:
                if c[i] == 1:
                    c.pop(i)
                else:
                    c[i] -= 1
            else:
                return False
        return True


