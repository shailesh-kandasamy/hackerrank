// HackerRank Ice-Cream-Parlor
def icecreamParlor(m,a):
 seen={}
 for i,x in enumerate(a,1):
  if m-x in seen: return seen[m-x],i
  seen[x]=i