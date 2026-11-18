# HackerRank: Between Two Sets
# Language: Python 3
from math import gcd
from functools import reduce
def getTotalX(a,b):
    l=reduce(lambda x,y:x*y//gcd(x,y),a,1); g=reduce(gcd,b)
    return sum(g%x==0 for x in range(l,g+1,l))

if __name__ == "__main__":
    n,m=map(int,input().split()); a=list(map(int,input().split())); b=list(map(int,input().split())); print(getTotalX(a,b))