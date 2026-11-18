// HackerRank Pairs
#include <bits/stdc++.h>
using namespace std;
int main(){int n,k;cin>>n>>k;unordered_set<int>s;for(int i=0,x;i<n;i++){cin>>x;s.insert(x);}int ans=0;for(int x:s)ans+=s.count(x+k);cout<<ans<<'\\n';}