// HackerRank Maximum-Element
st=[]
mx=[]
for _ in range(int(input())):
 q=input().split()
 if q[0]=='1':
  x=int(q[1]); st.append(x); mx.append(max(x,mx[-1] if mx else x))
 elif q[0]=='2': st.pop(); mx.pop()
 else: print(mx[-1])