class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        sorted_s = sorted(s)
        sorted_t = sorted(t)

        n = len(s)
        if n != len(t):
            return False;

        i = 0;
        while i < n:
            if sorted_s[i] != sorted_t[i]:
                return False;
            
            i += 1

        return True;
        