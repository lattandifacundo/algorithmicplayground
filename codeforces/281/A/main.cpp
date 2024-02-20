/*
All rights reserved to Facundo I. Lattandi © 2024.
See LICENSE.md file on the source of this repository for details.

Problem: 281A "Word Capitalization"
Direct link: https://codeforces.com/problemset/problem/281/A
*/

#include <bits/stdc++.h>
#define forn(i, n) for(int i=0; i<(n); i++)
#define in(file) //freopen(file, "r", stdin)
#define debug(x) //cout << #x << " = " << x << endl

using namespace std;

int main(){
    in("input");
    string a; cin>>a;

    a[0] = toupper(a[0]);

    cout<<a<<endl;
    return 0;
}
