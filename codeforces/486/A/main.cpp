/*
All rights reserved to Facundo I. Lattandi © 2024.
See LICENSE.md file on the source of this repository for details.

Problem: 486A "Calculating Function"
Direct link: https://codeforces.com/problemset/problem/486/A
*/

#include <bits/stdc++.h>
#define forn(i, n) for(int i=0; i<(n); i++)
#define in(file) //freopen(file, "r", stdin)
#define debug(x) //cout << #x << " = " << x << endl

using namespace std;

int main(){
    in("input");
    long long n; cin>>n;

    bool plus = false;
    if(n%2!=0){ n--; plus=true; }

    long long ans=n/2;
    if(plus) ans-=n+1;

    cout<<ans<<endl;
    return 0;
}
