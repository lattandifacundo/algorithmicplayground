/*
All rights reserved to Facundo I. Lattandi © 2024.
See LICENSE.md file on the source of this repository for details.

Problem: 282A "Bit++"
Direct link: https://codeforces.com/problemset/problem/282/A
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
        string a; cin>>a;
        if(a[1]=='+') ans++;
        else if(a[1]=='-') ans--;
    }

    cout<<ans<<endl;
    return 0;
}
