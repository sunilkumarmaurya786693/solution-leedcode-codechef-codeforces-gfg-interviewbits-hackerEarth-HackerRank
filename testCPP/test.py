s="love"
l=[0]*26
for i in s:
    pos= ord(i)-ord('a')
    l[pos]=l[pos]+1

ans=0
    k=[0]*26
    for i in s:
        pos= ord(i)-ord('a')
        k[pos]=k[pos]+1

    matched=True
    for i in range(26):
        if((l[i]==0 && k[i]!=0) || (l[i]!=0 && k[i]==0)):
            matched=False
        
    if(matched):
        ans++


