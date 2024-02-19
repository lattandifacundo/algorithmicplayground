/*
All rights reserved to Facundo I. Lattandi © 2024.
See LICENSE.md file on the source of this repository for details.

Problem: 339A "Helpful Maths"
Direct link: https://codeforces.com/problemset/problem/339/A
*/

#include <bits/stdc++.h>
#define forn(i, n) for(int i=0; i<(n); i++)
#define in(file) //freopen(file, "r", stdin)
#define debug(x) //cout << #x << " = " << x << endl

using namespace std;

int main(){
    in("input");
    string a; cin>>a;

    int a1, a2, a3; a1=a2=a3=0;
    for(int i=0; i<a.size(); i+=2){
        if(a[i]=='1') a1++;
        else if(a[i]=='2') a2++;
        else if(a[i]=='3') a3++;
    }

    bool first = true;
    forn(i, a1){
        if(!first){
            cout<<"+";
        }
        cout<<'1';
        first = false;
    }
    forn(i, a2){
        if(!first){
            cout<<"+";
        }
        cout<<"2";
        first = false;
    }
    forn(i, a3){
        if(!first){
            cout<<"+";
        }
        cout<<"3";
        first = false;
    }

    cout<<endl;
    return 0;
}
