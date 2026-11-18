# HackerRank: The Power Sum
# Language: Python 3
def powerSum(X,N,start=1):
    if X==0: return 1
    total=0; i=start
    while i**N<=X:
        total+=powerSum(X-i**N,N,i+1); i+=1
    return total

if __name__ == "__main__": print(powerSum(int(input()),int(input())))