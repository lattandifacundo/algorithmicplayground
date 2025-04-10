/*
All rights reserved to Facundo I. Lattandi © 2025.
See LICENSE.md file on the source of this repository for details.

Problem: 1328A "Divisibility Problem"
Direct link: https://codeforces.com/problemset/problem/1328/A
*/

#include <bits/stdc++.h>
#define forn(i, n) for(int i=0; i<(n); i++)
#define in(file) //freopen(file, "r", stdin)
#define debug(x) //cout << #x << " = " << x << endl

using namespace std;

int main(){
    in("input");

    int n; cin>>n;
    forn(i,n){
        int a,b; cin>>a>>b;
        if(a%b==0) cout<<0<<endl;
        else cout<<b-(a%b)<<endl;
    }
    
    return 0;
}
