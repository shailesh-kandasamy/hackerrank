// HackerRank Counting-Sort-1
def countingSort(a):
 f=[0]*100
 for x in a:f[x]+=1
 return f
if __name__=='__main__':
 n=int(input()); print(*countingSort(list(map(int,input().split()))))