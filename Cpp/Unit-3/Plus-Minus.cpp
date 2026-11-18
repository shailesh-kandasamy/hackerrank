// HackerRank: Plus Minus
// Language: C++17
#include <bits/stdc++.h>
using namespace std;
int main(){int n;cin>>n;int p=0,m=0,z=0;for(int i=0,x;i<n;i++){cin>>x;p+=x>0;m+=x<0;z+=x==0;}cout<<fixed<<setprecision(6)<<(double)p/n<<'\n'<<(double)m/n<<'\n'<<(double)z/n<<'\n';}