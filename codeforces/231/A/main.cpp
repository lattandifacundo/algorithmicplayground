/*
All rights reserved to Facundo I. Lattandi © 2024.
See LICENSE.md file on the source of this repository for details.

Problem: 231A "Team"
Direct link: https://codeforces.com/problemset/problem/231/A
*/

#include <bits/stdc++.h>
#define forn(i, n) for(int i=0; i<(n); i++)
#define in(file) //freopen(file, "r", stdin)
#define debug(x) //cout << #x << " = " << x << endl

using namespace std;

int main(){
    in("input");
    int n; cin>>n;

    int ans=0;
    forn(i, n){
        int a, b, c; cin>>a>>b>>c;
        if(a+b+c>=2) ans++;
    }

    cout<<ans<<endl;
    return 0;
}
