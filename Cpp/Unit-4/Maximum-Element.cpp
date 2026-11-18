// HackerRank Maximum-Element
#include <bits/stdc++.h>
using namespace std;
int main(){int main(){int q;cin>>q;stack<int>s,m;while(q--){int t;cin>>t;if(t==1){int x;cin>>x;s.push(x);m.push(m.empty()?x:max(x,m.top()));}else if(t==2){s.pop();m.pop();}else cout<<m.top()<<'\\n';}}}