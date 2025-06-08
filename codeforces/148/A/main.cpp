/*
All rights reserved to Facundo I. Lattandi © 2025.
See LICENSE.md file on the source of this repository for details.

Problem: 148A "Insomnia cure"
Direct link: https://codeforces.com/problemset/problem/148/A
*/

#include <bits/stdc++.h>
#define forn(i, n) for(int i=0; i<(n); i++)
#define in(file) //freopen(file, "r", stdin)
#define debug(x) //cout << #x << " = " << x << endl

using namespace std;

int main(){
    // in("input");

    vector<int> a(4);
    int d; cin>>a[0]>>a[1]>>a[2]>>a[3]>>d;
    int c=d;
    for(int i=1; i<=d; i++){
        bool flag=false;
        forn(j, 4){
            if(i%a[j]==0){
                flag=true;
            }
        }
        if(!flag) c--;
    }

    cout<<c<<endl;

    return 0;
}
