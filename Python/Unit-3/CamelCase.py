# HackerRank: CamelCase
# Language: Python 3
def camelcase(s):
    return 0 if not s else 1+sum(c.isupper() for c in s)

if __name__ == "__main__": print(camelcase(input().strip()))