class Solution:
	def removeDups(self, S):
		# code here
		p = ''
		for char in S:
		    if char not in p:
		           p += char
		return p
