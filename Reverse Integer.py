class Solution:
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        flag = 0 if x > 0 else 1
        lens = len(str(x))-1 if flag else len(str(x))
        result = 0
        rest = -x if flag else x
        for i in range(lens):
            num, rest = divmod(rest, 10 ** (lens - i - 1))
            result += num * 10 ** i
        result = -result if flag else result 
        return result if -2**31 < result < 2**31-1 else 0
