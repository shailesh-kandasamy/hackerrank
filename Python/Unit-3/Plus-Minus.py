# HackerRank: Plus Minus
# Language: Python 3
def plusMinus(arr):
    n=len(arr)
    for c in (sum(x>0 for x in arr),sum(x<0 for x in arr),sum(x==0 for x in arr)):
        print(f"{c/n:.6f}")

if __name__ == "__main__":
    n=int(input()); plusMinus(list(map(int,input().split())))