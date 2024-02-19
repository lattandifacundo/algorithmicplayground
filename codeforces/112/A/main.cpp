/*
All rights reserved to Facundo I. Lattandi © 2024.
See LICENSE.md file on the source of this repository for details.

Problem: 112A "Petya and Strings"
Direct link: https://codeforces.com/problemset/problem/112/A
*/

#include <bits/stdc++.h>
#define forn(i, n) for(int i=0; i<(n); i++)
#define in(file) //freopen(file, "r", stdin)
#define debug(x) //cout << #x << " = " << x << endl

using namespace std;

int main(){
    in("input");
    string a, b; cin>>a>>b;

    forn(i, a.size()) a[i] = tolower(a[i]);
    forn(i, b.size()) b[i] = tolower(b[i]);

    if(a==b) cout<<"0";
    else if(a>b) cout<<"1";
    else cout<<"-1";
    
    cout<<endl;
    return 0;
}
