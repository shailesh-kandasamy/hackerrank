// HackerRank: Super Reduced String
// Language: C++17
#include <bits/stdc++.h>
using namespace std;
int main(){string s,t;cin>>s;for(char c:s){if(!t.empty()&&t.back()==c)t.pop_back();else t+=c;}cout<<(t.empty()?"Empty String":t)<<'\n';}