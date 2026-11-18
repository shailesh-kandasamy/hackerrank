// EST1 HackerRank practice solutions - C++17.
// Core challenge functions. Add the matching HackerRank input/output wrapper for submission.
#include <bits/stdc++.h>
using namespace std;

long long simpleArraySum(const vector<int>& a){ return accumulate(a.begin(),a.end(),0LL); }

vector<double> plusMinus(const vector<int>& a){
    int n=a.size(), p=0, neg=0, z=0;
    for(int x:a) { p+=x>0; neg+=x<0; z+=x==0; }
    return {double(p)/n,double(neg)/n,double(z)/n};
}

int diagonalDifference(const vector<vector<int>>& a){
    int n=a.size(); long long x=0,y=0;
    for(int i=0;i<n;i++){x+=a[i][i];y+=a[i][n-1-i];}
    return abs(x-y);
}

int camelcase(const string& s){ int n=s.empty()?0:1; for(char c:s)n+=isupper((unsigned char)c); return n; }

string superReducedString(const string& s){
    string st;
    for(char c:s){ if(!st.empty()&&st.back()==c)st.pop_back(); else st+=c; }
    return st.empty()?"Empty String":st;
}

string pangrams(const string& s){
    bool seen[26]={}; int n=0;
    for(unsigned char c:s) if(isalpha(c)){int i=tolower(c)-'a';if(!seen[i])seen[i]=1,n++;}
    return n==26?"pangram":"not pangram";
}

int recursiveDigitSum(string n,int k){
    long long x=0; for(char c:n)x+=c-'0'; x*=k;
    while(x>=10){long long y=0;while(x){y+=x%10;x/=10;}x=y;}
    return (int)x;
}

int powerSum(int x,int n,int start=1){
    if(x==0)return 1; int ans=0;
    for(int i=start;pow(i,n)<=x;i++){int rem=x-(int)pow(i,n);if(rem>=0)ans+=powerSum(rem,n,i+1);}
    return ans;
}

int betweenTwoSets(const vector<int>& a,const vector<int>& b){
    int l=1,g=b[0]; for(int x:a)l=lcm(l,x); for(int x:b)g=gcd(g,x);
    int ans=0; for(int x=l;x<=g;x+=l)if(g%x==0)ans++; return ans;
}

int restaurant(int l,int b){return (l/gcd(l,b))*(b/gcd(l,b));}

string twoStrings(const string& a,const string& b){
    bool seen[256]={}; for(unsigned char c:a)seen[c]=1;
    for(unsigned char c:b)if(seen[c])return "YES"; return "NO";
}

string checkMagazine(const vector<string>& magazine,const vector<string>& note){
    unordered_map<string,int> c; for(auto&w:magazine)c[w]++;
    for(auto&w:note)if(--c[w]<0)return "No"; return "Yes";
}

string isBalanced(const string& s){
    stack<char> st;
    for(char c:s){if(c=='('||c=='['||c=='{')st.push(c);else{
        if(st.empty())return "NO";char t=st.top();st.pop();
        if((c==')'&&t!='(')||(c==']'&&t!='[')||(c=='}'&&t!='{'))return "NO";
    }} return st.empty()?"YES":"NO";
}

int equalStacks(vector<int> a,vector<int> b,vector<int> c){
    long long x=accumulate(a.begin(),a.end(),0LL),y=accumulate(b.begin(),b.end(),0LL),z=accumulate(c.begin(),c.end(),0LL);
    int i=0,j=0,k=0;
    while(!(x==y&&y==z)){
        if(x>=y&&x>=z){if(i==(int)a.size())return 0;x-=a[i++];}
        else if(y>=x&&y>=z){if(j==(int)b.size())return 0;y-=b[j++];}
        else {if(k==(int)c.size())return 0;z-=c[k++];}
    } return x;
}

vector<int> iceCreamParlor(int m,const vector<int>& a){
    unordered_map<int,int> seen;
    for(int i=0;i<(int)a.size();i++){if(seen.count(m-a[i]))return {seen[m-a[i]]+1,i+1};seen[a[i]]=i;}
    return {};
}

vector<int> closestNumbers(vector<int> a){
    sort(a.begin(),a.end());int d=INT_MAX;vector<int> out;
    for(int i=1;i<(int)a.size();i++)d=min(d,a[i]-a[i-1]);
    for(int i=1;i<(int)a.size();i++)if(a[i]-a[i-1]==d){out.push_back(a[i-1]);out.push_back(a[i]);}
    return out;
}

int pairs(int k,const vector<int>& a){
    unordered_set<int>s(a.begin(),a.end());int ans=0;
    for(int x:s)ans+=s.count(x+k);return ans;
}

long long tripleSum(vector<int> a,vector<int> b,vector<int> c){
    sort(a.begin(),a.end());sort(b.begin(),b.end());sort(c.begin(),c.end());
    a.erase(unique(a.begin(),a.end()),a.end());b.erase(unique(b.begin(),b.end()),b.end());c.erase(unique(c.begin(),c.end()),c.end());
    long long ans=0;int i=0,k=0;
    for(int q:b){while(i<(int)a.size()&&a[i]<=q)i++;while(k<(int)c.size()&&c[k]<=q)k++;ans+=1LL*i*k;}
    return ans;
}

int lonelyInteger(const vector<int>& a){int x=0;for(int v:a)x^=v;return x;}

uint32_t flippingBits(uint32_t n){return ~n;}

int maximizingXor(int l,int r){int x=l^r,ans=0;while(x){ans=(ans<<1)|1;x>>=1;}return ans;}

string timeComplexityPrimality(long long n){
    if(n<2)return "Not prime";if(n%2==0)return n==2?"Prime":"Not prime";
    for(long long d=3;d*d<=n;d+=2)if(n%d==0)return "Not prime";return "Prime";
}
