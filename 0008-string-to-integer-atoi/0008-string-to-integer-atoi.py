class Solution(object):
    def myAtoi(self, s):
        """
        :type s: str
        :rtype: int
        """
        INT_MIN, INT_MAX = -2**31, 2**31 - 1
        
        i = 0
        n = len(s)
        
        # skip spaces
        while i < n and s[i] == ' ':
            i += 1
        
        if i == n:
            return 0
        
        # sign
        sign = 1
        if s[i] == '-':
            sign = -1
            i += 1
        elif s[i] == '+':
            i += 1
        
        # conversion
        res = 0
        while i < n and s[i].isdigit():
            digit = int(s[i])
            res = res * 10 + digit
            i += 1
        
        res *= sign
        
        # rounding to 32-bit range
        if res < INT_MIN:
            return INT_MIN
        if res > INT_MAX:
            return INT_MAX
        
        return res
