n=int(input())
a=0
for i in range (0,n):
    l,m,o= map(int, input().split())
    if l+m+o>1:
        a+=1
    else:
        a+=0
print (a)