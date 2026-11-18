// HackerRank Equal-Stacks
#include <bits/stdc++.h>
using namespace std;
int main(){int main(){int n,m,k;cin>>n>>m>>k;vector<int>a(n),b(m),c(k);for(int&x:a)cin>>x;for(int&x:b)cin>>x;for(int&x:c)cin>>x;long long x=accumulate(a.begin(),a.end(),0LL),y=accumulate(b.begin(),b.end(),0LL),z=accumulate(c.begin(),c.end(),0LL);int i=0,j=0,l=0;while(x!=y||y!=z){if(x>=y&&x>=z)x-=a[i++];else if(y>=x&&y>=z)y-=b[j++];else z-=c[l++];}cout<<x<<'\\n';}}