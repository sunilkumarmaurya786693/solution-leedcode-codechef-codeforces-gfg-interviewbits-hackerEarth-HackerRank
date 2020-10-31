class Solution:
    def climbStairs(self, n: int) -> int:
        l=[0]*46
        l[1]=1
        l[2]=2
        for i in range(3,n+1):
            l[i]=l[i-1]+l[i-2]
        return (l[n])
        
