import math
from functools import reduce
#n=int(input())

'''
#32 bit representation
for i in range(31,-1,-1):
    print((n>>i)&1,end='')'''


'''
#bit representation
for i in range(int(math.log2(n)),-1,-1):
    print((n>>i)&1,end='')'''

'''
#mask
print("Masking:",end='')
i,j=map(int,input().split())
mask=2**(int(math.log2(n))+1)-1
mask=mask-(2**(i+1)-1)+(2**j-1)
print(f"Mask is :{mask} and result is:{mask&n}")'''

'''
#unique elements
print(reduce(lambda x,y:x^y,list(map(int,input().split()))))'''


'''
#2 unique elements
def findind(n):
    for i in range(32):
        if (n>>i)&1:return i
a=list(map(int,input().split()))
n1=n2=0
ind=findind(reduce(lambda x,y:x^y, a))
for i in a:
    if i&(1<<ind):n1^=i
    else: n2^=i
print(n1,n2)'''

'''
#binary representation
c=0
for i in range(1,100):
    c+=str(bin(i)[2:]).count('1')
    print(i,bin(i)[2:],str(bin(i)[2:]).count('1'),c,sep='\t')'''

'''
#incomplete
#max xor from given range
a,b=map(int,input().split())
c,d,bit=0,0,int(math.log2(b))
for i in range(bit,-1,-1):
    b1,b2=(a>>i)&1,(b>>i)&1
    if(b1!=b2):
        c+=2**i-1
        d+=2**i
    else:
        c+=(b1*(2**i))
        d+=(b2*(2**i))
    print(b1,b2)'''

'''
#xor for an array
print(reduce(lambda x,y:x^y,list(map(int,input().split()))))'''

'''
#bin for an array
a=list(map(int,input().split()))
bit=int(math.log2(max(a)))
for j in a:
    print(j,'\t:',end='')
    for i in range(bit,-1,-1):
        print((j>>i)&1,end='')
    print()'''


def sum(n):
    if n<=0:return 0
    return n+sum((n>>1))
print(sum(37))
