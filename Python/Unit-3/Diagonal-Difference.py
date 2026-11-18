# HackerRank: Diagonal Difference
# Language: Python 3
def diagonalDifference(a):
    n=len(a)
    return abs(sum(a[i][i]-a[i][n-1-i] for i in range(n)))

if __name__ == "__main__":
    n=int(input()); a=[list(map(int,input().split())) for _ in range(n)]; print(diagonalDifference(a))