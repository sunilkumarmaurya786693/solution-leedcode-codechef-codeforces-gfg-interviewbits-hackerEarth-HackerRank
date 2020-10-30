class Solution:
    def isValid(self, s: str) -> bool:
        l=[]
        for i in s:
            if(i=="("):
                l.append(")")
            elif(i=="{"):
                l.append("}")
            elif(i=="["):
                l.append("]")
            else:
                if(l==[] or i!=l[-1]):
                     return False
                l.pop()
        if(l==[]):
            return True
        else:
            return False
