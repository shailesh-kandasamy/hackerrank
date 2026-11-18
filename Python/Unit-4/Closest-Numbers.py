// HackerRank Closest-Numbers
def closestNumbers(a):
 a=sorted(a); d=min(a[i+1]-a[i] for i in range(len(a)-1))
 return [v for i in range(len(a)-1) if a[i+1]-a[i]==d for v in (a[i],a[i+1])]