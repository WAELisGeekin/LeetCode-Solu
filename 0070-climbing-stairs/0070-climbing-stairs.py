class Solution:
    def climbStairs(self, n) :
        if n == 1:
            return 1
        
        ways_to_previous = 1   #a
        ways_to_current = 2    #b
        
        for step in range(3, n + 1):
            ways_to_next = ways_to_previous + ways_to_current #c=a+b
            ways_to_previous = ways_to_current                #a=b
            ways_to_current = ways_to_next                   #b=c
        
        return ways_to_current