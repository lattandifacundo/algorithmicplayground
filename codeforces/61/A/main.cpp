/*
All rights reserved to Facundo I. Lattandi © 2024.
See LICENSE.md file on the source of this repository for details.

Problem: 61A "Ultra-Fast Mathematician"
Direct link: https://codeforces.com/problemset/problem/61/A
*/

#include <bits/stdc++.h>
#define forn(i, n) for(int i=0; i<(n); i++)
#define in(file) freopen(file, "r", stdin)
#define debug(x) cout << #x << " = " << x << endl

using namespace std;

int main(){
    // in("input");

    string a, b; cin>>a>>b;
    string c="";
    forn(i, a.size()){
        if(a[i]==b[i]) c+='0';
        else c+='1';
    }
    cout<<c<<endl;

    return 0;
}
