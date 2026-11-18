// HackerRank Balanced-Brackets
#include <bits/stdc++.h>
using namespace std;
int main(){int main(){int t;cin>>t;while(t--){string s;cin>>s;stack<char>st;bool ok=1;for(char c:s){if(c=='('||c=='['||c=='{')st.push(c);else{if(st.empty()){ok=0;break;}char x=st.top();st.pop();if((c==')'&&x!='(')||(c==']'&&x!='[')||(c=='}'&&x!='{'))ok=0;}}cout<<(ok&&st.empty()?"YES":"NO")<<'\\n';}}}