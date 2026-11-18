// HackerRank: Restaurant
// Language: C++17
#include <bits/stdc++.h>
using namespace std;
int main(){int t;cin>>t;while(t--){long long l,b;cin>>l>>b;cout<<l/gcd(l,b)*b/gcd(l,b)<<'\n';}}