// HackerRank Largest-Rectangle
#include <bits/stdc++.h>
using namespace std;
int main(){int main(){int n;cin>>n;vector<long long>h(n+1);for(int i=0;i<n;i++)cin>>h[i];stack<int>s;long long ans=0;for(int i=0;i<=n;i++){while(!s.empty()&&h[s.top()]>h[i]){auto v=h[s.top()];s.pop();int w=s.empty()?i:i-s.top()-1;ans=max(ans,v*w);}s.push(i);}cout<<ans<<'\\n';}}