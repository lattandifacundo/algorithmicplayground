/*
All rights reserved to Facundo I. Lattandi © 2025.
See LICENSE.md file on the source of this repository for details.

Problem: 427A “Police Recruits”
Direct link: https://codeforces.com/problemset/problem/427/A
*/

#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main(void){
    uint32_t n; scanf("%" SCNu32, &n);

    uint32_t ans=0;
    uint32_t officers=0;
    for(uint32_t i=0; i<n; i++){
        int16_t a; scanf("%" SCNd16, &a);
        if(a>0) officers+=a;
        if(a==-1){
            if(officers>0){
                officers--;
            }
            else{
                ans+=1;
            }
        }
    }

    printf("%" PRIu32 "\n", ans);

    return 0;
}
