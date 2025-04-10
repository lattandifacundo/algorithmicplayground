/*
All rights reserved to Facundo I. Lattandi © 2025.
See LICENSE.md file on the source of this repository for details.

Problem: 520A "Pangram"
Direct link: https://codeforces.com/problemset/problem/520/A
*/

#include <bits/stdc++.h>
#define forn(i, n) for(int i=0; i<(n); i++)
#define in(file) //freopen(file, "r", stdin)
#define debug(x) //cout << #x << " = " << x << endl

using namespace std;

int main(){
    in("input");
    int _; string a; cin>>_>>a;
    
    set<char> s;
    for(auto c: a){
        c = tolower(c);
        s.insert(c);
    }

    if(s.size()==26) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
