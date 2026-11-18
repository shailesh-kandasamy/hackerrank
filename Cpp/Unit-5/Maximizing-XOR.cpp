// HackerRank Maximizing-XOR
#include <bits/stdc++.h>
using namespace std;
int main(){int l,r;cin>>l>>r;int x=l^r,a=0;while(x){a=(a<<1)|1;x>>=1;}cout<<a<<'\\n';}