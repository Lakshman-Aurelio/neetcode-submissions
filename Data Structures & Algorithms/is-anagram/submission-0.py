class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        
        li1 = list(s)
        li2 = list(t)
        li1.sort()
        li2.sort()

        if (li1 == li2):
            return True
        else:
            return False
