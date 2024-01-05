import math
def andd(a):
    b,t=[],2**31-1
    for i in a:
        b.append(t&i)
        t=b[-1]
    return b
def comp(n):
    n1=0
    for i in range(int(math.log2(n)),-1,-1):
        if((n>>i)&1==0):n1+=(2**i)
    print(n1)
    return n1
a=list(map(int,input().split()))
b=andd(a)
q=int(input())
for i in range(q):
    l,r=map(int,input().split())
    if l==0:
        print(b[r+1])
    else:
        print(comp(b[l-1])^b[r+1])
