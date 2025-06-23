/*
All rights reserved to Facundo I. Lattandi © 2025.
See LICENSE.md file on the source of this repository for details.

Problem: 141A "Amusing Joke"
Direct link: https://codeforces.com/problemset/problem/141/A
*/

#include <bits/stdc++.h>
#define forn(i, n) for(int i=0; i<((int)n); i++)
#define in(file) freopen(file, "r", stdin)
#define debug(x) cout << #x << " = " << x << endl

using namespace std;

int main(){
    string a, b, c; cin>>a>>b>>c;
    map<char, int> m;

    forn(i, a.size()) m[a[i]]++;
    forn(i, b.size()) m[b[i]]++;

    bool flag=false;
    forn(i, c.size()){
        if(--m[c[i]]==-1){ flag=true; break; }
    }

    for(auto c : m){
        if(c.second!=0){ flag=true; break; }
    }

    if(!flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
