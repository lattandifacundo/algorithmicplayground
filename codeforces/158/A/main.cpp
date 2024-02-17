/*
All rights reserved to Facundo I. Lattandi © 2024.
See LICENSE.md file on the source of this repository for details.

Problem: 158A "Next Round"
Direct link: https://codeforces.com/problemset/problem/158/A
*/

#include <bits/stdc++.h>
#define forn(i, n) for(int i=0; i<(n); i++)
#define in(file) //freopen(file, "r", stdin)
#define debug(x) //cout << #x << " = " << x << endl

using namespace std;

int main(){
    in("input");

    int n, k; cin>>n>>k;
    vector<int> v(n);
    forn(i, n) cin>>v[i];
    
    int ans=0;
    forn(i, n){
        if(v[i] >= v[k-1] && v[i]>0) ans++;
    }

    cout<<ans<<endl;
    return 0;
}
