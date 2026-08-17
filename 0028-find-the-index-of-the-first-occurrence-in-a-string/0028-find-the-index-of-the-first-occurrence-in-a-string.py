class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        i= 0
        j= 0 
        if(needle in haystack):
            return haystack.index(needle)
        else:
            return -1   



        