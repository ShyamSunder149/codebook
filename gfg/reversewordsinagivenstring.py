class Solution:
    
    #Function to reverse words in a given string.
    def reverseWords(self,S):
        # code here
        m = ''
        s = S.split('.')
        s.reverse()
        for i in s:
            m += i
            m += '.'
        return m[:-1]
