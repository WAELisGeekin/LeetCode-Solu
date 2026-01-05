class Solution(object):
    def divide(self, dividend, divisor):
        """
        :type dividend: int
        :type divisor: int
        :rtype: int
        """
#for the tle prblm 
        if dividend == -2**31 and divisor == -1:
            return 2**31 - 1



        if dividend == 0:
            return 0

       
        sign = -1 if (dividend < 0) ^ (divisor < 0) else 1

        a = abs(dividend)
        b = abs(divisor)

        quotient = 0
#due the time limit exceeded error 
       # while a >= b:
        #    a -= b
         #   quotient += 1

        #return quotient * sign
        while a >= b:
            temp = b
            multiple = 1

           
            while a >= (temp << 1):
                temp <<= 1
                multiple <<= 1

            a -= temp
            quotient += multiple

        return quotient * sign