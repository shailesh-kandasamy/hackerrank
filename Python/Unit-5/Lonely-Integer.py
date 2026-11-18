// HackerRank Lonely-Integer
def lonelyinteger(a):
 x=0
 for v in a: x^=v
 return x
if __name__=='__main__':
 n=int(input()); print(lonelyinteger(list(map(int,input().split()))))