t = int(input())
while t>0:
    n = int(input())
    ans = (((n*(n+1))*(4*n-1))//6) * 2022
    print(ans%1000000007)
    t = t - 1