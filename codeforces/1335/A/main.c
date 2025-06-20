/*
All rights reserved to Facundo I. Lattandi © 2025.
See LICENSE.md file on the source of this repository for details.

Problem: 1335A "Candies and Two Sisters"
Direct link: https://codeforces.com/problemset/problem/1335/A
*/

#include <stdio.h>
#include <stdint.h>
#define forn(i, n) for(int i=0; i<(int)(n); i++)

int main(void){
    uint32_t n; scanf("%u", &n);

    uint64_t a;
    forn(i, n){
        scanf("%lu", &a);
        if(a<3) printf("%d\n", 0);
        else printf("%ld\n", (a-1)/2);
    }

    return 0;
}