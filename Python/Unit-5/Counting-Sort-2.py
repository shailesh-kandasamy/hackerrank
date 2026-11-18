// HackerRank Counting-Sort-2
def countingSort(a):
 f=[0]*100
 for x in a:f[x]+=1
 return [x for x,c in enumerate(f) for _ in range(c)]
if __name__=='__main__':
 n=int(input()); print(*countingSort(list(map(int,input().split()))))