// HackerRank Flipping-Bits
def flippingBits(n): return n^0xFFFFFFFF
if __name__=='__main__':
 for _ in range(int(input())): print(flippingBits(int(input())))