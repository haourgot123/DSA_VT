from math import *




if __name__ == '__main__':
    t = int(input())
    while t > 0:
        n, m, k = map(int , input().split())
        ans = n ** m
        ans = str(ans)
        print(ans[0: k])
        t-=1