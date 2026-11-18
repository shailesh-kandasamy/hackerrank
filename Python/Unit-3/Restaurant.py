# HackerRank: Restaurant
# Language: Python 3
from math import gcd
def restaurant(l,b): return (l//gcd(l,b))*(b//gcd(l,b))
if __name__ == "__main__":
    for _ in range(int(input())):
        l,b=map(int,input().split()); print((l*b)//gcd(l,b))