// HackerRank Equal-Stacks
def equalStacks(a,b,c):
 s=[sum(a),sum(b),sum(c)]; v=[a,b,c]; i=[0,0,0]
 while len(set(s))>1:
  j=s.index(max(s))
  if i[j]==len(v[j]): return 0
  s[j]-=v[j][i[j]]; i[j]+=1
 return s[0]