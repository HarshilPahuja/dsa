#dont use len
class Solution:
    def countDigit(self, n):
        cnt=0
        while(n>0):
            cnt+=1
            n=int(n/10)
        return cnt


