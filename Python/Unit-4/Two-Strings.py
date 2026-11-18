// HackerRank Two-Strings
def twoStrings(a,b): return 'YES' if set(a)&set(b) else 'NO'
if __name__=='__main__':
 for _ in range(int(input())): print(twoStrings(input().strip(),input().strip()))