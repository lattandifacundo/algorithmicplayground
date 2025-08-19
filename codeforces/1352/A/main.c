/*
All rights reserved to Facundo I. Lattandi © 2025.
See LICENSE.md file on the source of this repository for details.

Problem: 1352A "Sum of Round Numbers"
Direct link: https://codeforces.com/problemset/problem/1352/A
*/

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#define forn(i, n) for(int i=0; i<(int)(n); i++)

int integerPow(int16_t base, int16_t exp){
    int16_t ans=base;
    forn(i, exp-1){
        ans*=base;
    }
    return exp!=0 ? ans : 1;
}

int main(void){
    uint16_t n; scanf("%hu", &n);
    
    uint16_t a, b;
    forn(i, n){
        scanf("%hu", &a);
        b=a;

        uint16_t c=0;
        while(a!=0){
            if(a%10!=0) c++;
            a/=10;
        }
        printf("%d\n", c);

        uint16_t l=0;
        while(b!=0){
            if(b%10!=0){
                printf("%d ", b%10*integerPow(10, l));
            }
            b/=10;
            l+=1;
        }
        printf("\n");
    }

    return 0;
}
