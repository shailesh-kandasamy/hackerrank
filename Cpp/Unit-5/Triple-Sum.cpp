// HackerRank Triple-Sum
#include <bits/stdc++.h>
using namespace std;
int main(){int p,q,r;cin>>p>>q>>r;vector<long long>a(p),b(q),c(r);for(auto&x:a)cin>>x;for(auto&x:b)cin>>x;for(auto&x:c)cin>>x;sort(a.begin(),a.end());sort(b.begin(),b.end());sort(c.begin(),c.end());a.erase(unique(a.begin(),a.end()),a.end());b.erase(unique(b.begin(),b.end()),b.end());c.erase(unique(c.begin(),c.end()),c.end());long long z=0;for(auto x:b)z+=(upper_bound(a.begin(),a.end(),x)-a.begin())*(upper_bound(c.begin(),c.end(),x)-c.begin());cout<<z<<'\\n';}