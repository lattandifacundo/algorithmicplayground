/*
All rights reserved to Facundo I. Lattandi © 2024.
See LICENSE.md file on the source of this repository for details.

Problem: 271A "Beautiful Year"
Direct link: https://codeforces.com/problemset/problem/271/A
*/

#include <bits/stdc++.h>
#define forn(i, n) for(int i=0; i<(n); i++)
#define in(file) //freopen(file, "r", stdin)
#define debug(x) //cout << #x << " = " << x << endl

using namespace std;

int main(){
    in("input");
    int a; cin>>a;
    
    bool founded = false;
    while(!founded){
        a++;
        string sa = to_string(a);
        set<char> b;
        forn(i, sa.size()){
            b.insert(sa[i]);
        }
        if(b.size() == sa.size()) founded = true;
    }

    cout<<a<<endl;
    return 0;
}
