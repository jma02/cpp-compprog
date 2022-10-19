import math

def main():
    n = int(input())
    
    i  = n-1
    j = 1
    ans = 0
    while(i > 0):
        ans+=math.comb(i, n//2-j)
        i-=3;
        j+=1
    print(ans%998244353)

main()
