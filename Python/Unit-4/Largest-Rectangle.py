// HackerRank Largest-Rectangle
def largestRectangle(h):
 st=[]; ans=0
 for i,x in enumerate(h+[0]):
  start=i
  while st and st[-1][1]>x:
   j,v=st.pop(); ans=max(ans,v*(i-j)); start=j
  st.append((start,x))
 return ans