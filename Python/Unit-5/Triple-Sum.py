// HackerRank Triple-Sum
from bisect import bisect_right
def triplets(a,b,c):
 a=sorted(set(a)); b=sorted(set(b)); c=sorted(set(c)); return sum(bisect_right(a,x)*bisect_right(c,x) for x in b)