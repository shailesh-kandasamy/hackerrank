// HackerRank Hash-Tables-Ransom-Note
#include <bits/stdc++.h>
using namespace std;
int main(){int main(){int m,n;cin>>m>>n;unordered_map<string,int>c;string s;while(m--){cin>>s;c[s]++;}bool ok=1;while(n--){cin>>s;if(--c[s]<0)ok=0;}cout<<(ok?"Yes":"No")<<'\\n';}}