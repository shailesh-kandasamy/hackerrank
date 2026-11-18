// HackerRank Time-Complexity-Primality
#include <bits/stdc++.h>
using namespace std;
bool prime(long long n){if(n<2)return 0;if(n%2==0)return n==2;for(long long d=3;d*d<=n;d+=2)if(n%d==0)return 0;return 1;} int main(){int t;cin>>t;while(t--){long long n;cin>>n;cout<<(prime(n)?"Prime":"Not prime")<<'\\n';} }