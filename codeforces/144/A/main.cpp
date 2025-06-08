/*
All rights reserved to Facundo I. Lattandi © 2025.
See LICENSE.md file on the source of this repository for details.

Problem: 144A "Arrival of the General"
Direct link: https://codeforces.com/problemset/problem/144/A
*/

#include <bits/stdc++.h>
#define forn(i, n) for(int i=0; i<(n); i++)
#define in(file) //freopen(file, "r", stdin)
#define debug(x) //cout << #x << " = " << x << endl
#define INF 1e8

using namespace std;

int main(){
    in("input");
    int n; cin>>n;

    int mn=INF; int mx=0;
    int mn_i, mx_i;
    forn(i, n){
        int a; cin>>a;
        if(a<=mn){
            mn=a; mn_i=i;
        }
        if(a>mx){
            mx=a; mx_i=i;
        }
    }

    int mv=(abs(0-mx_i)+abs(n-1-mn_i));
    if (mn_i < mx_i) mv--;
    cout<<mv<<endl;

    return 0;
}
