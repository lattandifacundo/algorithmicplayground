/*
All rights reserved to Facundo I. Lattandi © 2024.
See LICENSE.md file on the source of this repository for details.

Problem: 71A "Way Too Long Words"
Direct link: https://codeforces.com/problemset/problem/71/A
*/

#include <bits/stdc++.h>
#define forn(i, n) for(int i=0; i<(n); i++)
#define in(file) //freopen(file, "r", stdin)
#define debug(x) //cout << #x << " = " << x << endl

using namespace std;

int main(){
    in("input");
    int n; cin>>n;
    forn(i, n){
        string a; cin>>a;
        if(a.length()>10){
            cout<<a[0]<<a.length()-2<<a[a.length()-1]<<endl;
        }
        else cout<<a<<endl;
    }

    return 0;
}
