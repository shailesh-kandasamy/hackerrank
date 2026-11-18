// HackerRank Pairs
def pairs(k,a):
 s=set(a); return sum(x+k in s for x in s)
if __name__=='__main__':
 n,k=map(int,input().split()); print(pairs(k,list(map(int,input().split()))))