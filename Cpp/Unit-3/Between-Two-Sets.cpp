// HackerRank: Between Two Sets
// Language: C++17
#include <bits/stdc++.h>
using namespace std;
int main(){int n,m;cin>>n>>m;int l=1,g=0;for(int i=0,x;i<n;i++){cin>>x;l=lcm(l,x);}for(int i=0,x;i<m;i++){cin>>x;g=gcd(g,x);}int ans=0;for(int x=l;x<=g;x+=l)ans+=g%x==0;cout<<ans<<'\n';}