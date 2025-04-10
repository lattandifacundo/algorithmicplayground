/*
All rights reserved to Facundo I. Lattandi © 2025.
See LICENSE.md file on the source of this repository for details.

Problem: 228A "Is your horseshoe on the other hoof?"
Direct link: https://codeforces.com/problemset/problem/228/A
*/

#include <bits/stdc++.h>
#define forn(i, n) for(int i=0; i<(n); i++)
#define in(file) //freopen(file, "r", stdin)
#define debug(x) //cout << #x << " = " << x << endl

using namespace std;

int main(){
    in("input");

    int a,b,c,d; cin>>a>>b>>c>>d;
    set<int> st; st.insert({a,b,c,d});
    cout<<4-st.size()<<endl;

    return 0;
}
