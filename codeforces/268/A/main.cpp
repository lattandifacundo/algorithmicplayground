/*
All rights reserved to Facundo I. Lattandi © 2025.
See LICENSE.md file on the source of this repository for details.

Problem: 268A "Games"
Direct link: https://codeforces.com/problemset/problem/268/A
*/

#include <bits/stdc++.h>
#define forn(i, n) for(int i=0; i<(n); i++)
#define in(file) //freopen(file, "r", stdin)
#define debug(x) //cout << #x << " = " << x << endl

using namespace std;

int main(){
    // in("input");
    map<int, int> a, b; a.clear(); b.clear();
    set<int> s; s.clear();

    int n; cin>>n;
    forn(i, n){
        int c, d; cin>>c>>d;
        if(!a.count(c)) a[c]=1;
        else a[c]++;
        if(!b.count(d)) b[d]=1;
        else b[d]++;
        s.insert(c); s.insert(d);
    }

    int ans=0;
    for(auto x : s){
        if(a.count(x) && b.count(x)){
            ans+=(a[x]*b[x]);
        }
    }
    cout<<ans<<endl;

    return 0;
}
