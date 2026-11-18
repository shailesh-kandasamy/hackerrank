# HackerRank: Pangrams
# Language: Python 3
def pangrams(s):
    return 'pangram' if len({c.lower() for c in s if c.isalpha()})==26 else 'not pangram'

if __name__ == "__main__": print(pangrams(input()))