/*
All rights reserved to Facundo I. Lattandi © 2025.
See LICENSE.md file on the source of this repository for details.

Problem: 158A "Next Round"
Direct link: https://codeforces.com/problemset/problem/158/A
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n, k; scanf("%d %d", &n, &k);

    int *a=malloc(n*sizeof(int));
    for(int i=0; i<n; i++) scanf("%d", &a[i]);

    int c=0;
    for(int i=0; i<n; i++){
        if(a[i]>0 && a[i]>=a[k-1]) c++;
    }

    printf("%d\n", c);
    
    free(a);
    return 0;
}
