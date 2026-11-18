// HackerRank Two-Strings
#include <bits/stdc++.h>
using namespace std;
int main(){int main(){int t;cin>>t;while(t--){string a,b;cin>>a>>b;bool s[256]={};for(unsigned char c:a)s[c]=1;bool ok=0;for(unsigned char c:b)ok|=s[c];cout<<(ok?"YES":"NO")<<'\\n';}}}