// HackerRank: Recursive Digit Sum
// Language: C++17
#include <bits/stdc++.h>
using namespace std;
int main(){string s;long long k,sum=0;cin>>s>>k;for(char c:s)sum+=c-'0';sum*=k;while(sum>=10){long long t=0;while(sum){t+=sum%10;sum/=10;}sum=t;}cout<<sum<<'\n';}