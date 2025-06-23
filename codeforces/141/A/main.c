/*
All rights reserved to Facundo I. Lattandi © 2025.
See LICENSE.md file on the source of this repository for details.

Problem: 141A "Amusing Joke"
Direct link: https://codeforces.com/problemset/problem/141/A
*/

#include <stdio.h>

int main(void){
    char buf[102];
    int map[26];

    for(int i=0; i<26; i++) map[i]=0;

    for(int i=0; i<2; i++){
        fgets(buf, 102, stdin);
        for(int j=0; buf[j]!='\0'; j++){
            map[buf[j]-65]++;
        }
    }

    int flag=0;
    fgets(buf, 102, stdin);
    for(int i=0; buf[i]!='\0'; i++){
        if(--map[buf[i]-65]==-1){
            flag=1; break;
        }
    }
    
    for(int i=0; i<26; i++){
        if(map[i]!=0){
            flag=1; break;
        }
    }

    if(!flag) printf("YES\n");
    else printf("NO\n");

    return 0;
}
