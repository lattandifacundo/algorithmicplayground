/*
All rights reserved to Facundo I. Lattandi © 2024.
See LICENSE.md file on the source of this repository for details.

Problem: 4A "Watermelon"
Direct link: https://codeforces.com/problemset/problem/4/A
*/

#include <bits/stdc++.h>
#define forn(i, n) for(int i=0; i<(n); i++)
#define in(file) //freopen(file, "r", stdin)
#define debug(x) //cout << #x << " = " << x << endl

using namespace std;

int main(){
    in("input");
    int a; cin>>a;

    if(a<=2) cout<<"NO";
    else if(a%2==0) cout<<"YES";
    else cout<<"NO";
    cout<<endl;

    return 0;
}
