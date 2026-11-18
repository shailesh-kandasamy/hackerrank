// HackerRank Ice-Cream-Parlor
#include <bits/stdc++.h>
using namespace std;
int main(){int main(){int t;cin>>t;while(t--){int m,n;cin>>m>>n;unordered_map<int,int>s;for(int i=1,x;i<=n;i++){cin>>x;if(s.count(m-x))cout<<s[m-x]<<' '<<i<<'\\n';s[x]=i;}}}}