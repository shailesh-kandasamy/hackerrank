# HackerRank: Super Reduced String
# Language: Python 3
def superReducedString(s):
    st=[]
    for c in s:
        if st and st[-1]==c: st.pop()
        else: st.append(c)
    return ''.join(st) or 'Empty String'

if __name__ == "__main__": print(superReducedString(input().strip()))