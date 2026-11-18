// HackerRank Hash-Tables-Ransom-Note
from collections import Counter
def checkMagazine(m,n): return 'Yes' if not Counter(n)-Counter(m) else 'No'
if __name__=='__main__':
 x,y=map(int,input().split()); print(checkMagazine(input().split(),input().split()))