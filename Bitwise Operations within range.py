import math
#and,xor,or for given array within limits
a=list(map(int,input().split()))
n=int(math.log2(max(a)))
b=[]
for i in range(len(a)):
    b.append([])
for j in range(n,-1,-1):
    c=0
    for i in range(len(a)):
        if((a[i]>>j)&1):
            c+=1
        b[i].append(c)
print(b)
l,r=map(int,input().split())
c=0
for i in range(len(b[r])):
    #and
    if b[r][i]==r+1:
        c+=(2**(n-i))
    #or b[r][i]>=1
    #xor b[r][i]%2
print(c)
