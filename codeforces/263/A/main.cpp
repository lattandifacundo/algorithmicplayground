/*
All rights reserved to Facundo I. Lattandi © 2024.
See LICENSE.md file on the source of this repository for details.

Problem: 263A "Beautiful Matrix"
Direct link: https://codeforces.com/problemset/problem/263/A 
*/

#include <bits/stdc++.h>
#define forn(i, n) for(int i=0; i<(n); i++)
#define in(file) //freopen(file, "r", stdin)
#define debug(x) //cout << #x << " = " << x << endl

using namespace std;

int main(){
    in("input");

    int ai, aj;
    forn(i, 5){
        forn(j, 5){
            int a; cin>>a;
            if(a==1){
                ai=i; aj=j;
            }
        }
    }

    cout<<abs(ai-2)+abs(aj-2)<<endl;

    return 0;
}
