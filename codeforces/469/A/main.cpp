/*
All rights reserved to Facundo I. Lattandi © 2025.
See LICENSE.md file on the source of this repository for details.

Problem: 469A "I Wanna Be the Guy"
Direct link: https://codeforces.com/problemset/problem/469/A
*/

#include <bits/stdc++.h>
#define forn(i, n) for(int i=0; i<(n); i++)
#define in(file) //freopen(file, "r", stdin)
#define debug(x) //cout << #x << " = " << x << endl

using namespace std;

int main(){
    in("input");

    int n; cin>>n;
    int a, b; cin>>a;
    set<int> s; s.clear();
    forn(i, a){ int c; cin>>c; s.insert(c); }
    cin>>b;
    forn(i, b){ int c; cin>>c; s.insert(c); }

    if ((int)s.size() == n) cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";
    cout<<endl;

    return 0;
}
