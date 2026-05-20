#User function Template for python3

class Solution:
	def reverseDigits(self, n):
		# Code here
		rev = 0
		while n :
		    a = n % 10
		    rev = rev * 10 + a
		    n = n// 10
		    
		return rev