// HackerRank Maximizing-XOR
def maximizingXor(l,r): return (1<<(l^r).bit_length())-1
if __name__=='__main__':
 l=int(input()); r=int(input()); print(maximizingXor(l,r))