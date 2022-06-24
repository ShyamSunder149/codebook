class Solution:
    
    #Function is to check whether two strings are anagram of each other or not.
    def isAnagram(self,a,b):
        #code here
        a = list(a)
        b = list(b)
        a.sort()
        b.sort()
        a1 = ''.join(a)
        b1 = ''.join(b)
        if a1 == b1:
            return 1
        else:
            return 0
