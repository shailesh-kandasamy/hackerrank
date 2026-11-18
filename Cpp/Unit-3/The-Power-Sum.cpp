// HackerRank: The Power Sum
// Language: C++17
#include <bits/stdc++.h>
using namespace std;
int rec(int x,int n,int st){if(!x)return 1;int ans=0;for(int i=st;pow(i,n)<=x;i++)ans+=rec(x-(int)pow(i,n),n,i+1);return ans;}
int main(){int x,n;cin>>x>>n;cout<<rec(x,n,1)<<'\n';}