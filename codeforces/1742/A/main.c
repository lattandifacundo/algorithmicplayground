/*
All rights reserved to Facundo I. Lattandi © 2025.
See LICENSE.md file on the source of this repository for details.

Problem: 1742A “Sum”
Direct link: https://codeforces.com/problemset/problem/1742/A
*/

#include <stdio.h>
#include <stdint.h>

int main(void){
    uint16_t n; scanf("%hu", &n);
    
    for(uint16_t i=0; i<n; i++){
        uint16_t a, b, c; scanf("%hu %hu %hu", &a, &b, &c);
        if(a+b==c) printf("YES\n");
        else if(a+c==b) printf("YES\n");
        else if(b+c==a) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}
