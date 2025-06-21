/*
All rights reserved to Facundo I. Lattandi © 2025.
See LICENSE.md file on the source of this repository for details.

Problem: 2120A "Square of Rectangles"
Direct link: https://codeforces.com/problemset/problem/2120/A
*/

#include <bits/stdc++.h>
#define forn(i, n) for(int i=0; i<(n); i++)
#define in(file) freopen(file, "r", stdin)
#define debug(x) cout << #x << " = " << x << endl

using namespace std;

int main(){
    int n; cin>>n;
    
    forn(i, n){
        int l1, l2, l3, b1, b2, b3;
        cin>>l1>>b1>>l2>>b2>>l3>>b3;

        int suml=l1+l2+l3;
        if(suml==b1 && suml==b2 && suml==b3){
            cout<<"YES"<<endl; continue;
        }
        
        int sumb=b1+b2+b3;
        if(sumb==l1 && sumb==l2 && sumb==l3){
            cout<<"YES"<<endl; continue;
        }

        if(b2==b3 && l1==b1+b2 && l1==l2+l3){
            cout<<"YES"<<endl; continue;
        }

        if(l2==l3 && b1==l1+l2 && b1==b2+b3){
            cout<<"YES"<<endl; continue;
        }

        cout<<"NO"<<endl;
    }

    return 0;
}
