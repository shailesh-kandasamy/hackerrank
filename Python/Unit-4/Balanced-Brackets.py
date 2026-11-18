// HackerRank Balanced-Brackets
def isBalanced(s):
 st=[]; p={')':'(',']':'[','}':'{'}
 for c in s:
  if c in '([{': st.append(c)
  elif not st or st.pop()!=p[c]: return 'NO'
 return 'YES' if not st else 'NO'
if __name__=='__main__':
 for _ in range(int(input())): print(isBalanced(input().strip()))