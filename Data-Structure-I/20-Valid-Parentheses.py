class Solution:
    def isValid(self, s: str) -> bool:
        st = []
        if len(s)%2 == 1:
            return False
        for ch in s:
            if ch in "]})":
                if not st:
                    return False
                elif ch==')' and st[-1]!='(':
                    return False
                elif ch==']' and st[-1]!='[':
                    return False
                elif ch=='}' and st[-1]!='{':
                    return False
                else:
                    st.pop()
            else:
                st.append(ch)
        return True if not st else False
