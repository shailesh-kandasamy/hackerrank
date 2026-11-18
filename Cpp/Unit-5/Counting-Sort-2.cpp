// HackerRank Counting-Sort-2
#include <bits/stdc++.h>
using namespace std;
int main(){int n,x;cin>>n;int f[100]={};while(n--){cin>>x;f[x]++;}for(int i=0;i<100;i++)while(f[i]--)cout<<i<<' ';}