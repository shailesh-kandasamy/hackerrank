// HackerRank: Pangrams
// Language: C++17
#include <bits/stdc++.h>
using namespace std;
int main(){string s;getline(cin,s);getline(cin,s);bool a[26]={};for(unsigned char c:s)if(isalpha(c))a[tolower(c)-'a']=1;cout<<(count(a,a+26,true)==26?"pangram":"not pangram")<<'\n';}