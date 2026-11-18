// HackerRank Time-Complexity-Primality
from math import isqrt
def prime(n):
 if n<2:return False
 if n%2==0:return n==2
 return all(n%d for d in range(3,isqrt(n)+1,2))
if __name__=='__main__':
 for _ in range(int(input())): print('Prime' if prime(int(input())) else 'Not prime')