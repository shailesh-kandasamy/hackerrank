// HackerRank: Diagonal Difference
// Language: C++17
#include <bits/stdc++.h>
using namespace std;
int main(){int n;cin>>n;long long a=0,b=0;for(int i=0;i<n;i++)for(int j=0,x;j<n;j++){cin>>x;if(i==j)a+=x;if(i+j==n-1)b+=x;}cout<<llabs(a-b)<<'\n';}