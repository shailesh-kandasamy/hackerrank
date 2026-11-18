// HackerRank: CamelCase
// Language: C++17
#include <bits/stdc++.h>
using namespace std;
int main(){string s;cin>>s;int ans=s.empty()?0:1;for(char c:s)ans+=isupper((unsigned char)c);cout<<ans<<'\n';}