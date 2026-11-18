# HackerRank: Recursive Digit Sum
# Language: Python 3
def superDigit(n,k):
    x=sum(map(int,n))*k
    while x>=10: x=sum(map(int,str(x)))
    return x

if __name__ == "__main__":
    n,k=input().split(); print(superDigit(n,int(k)))