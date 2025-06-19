/*
All rights reserved to Facundo I. Lattandi © 2025.
See LICENSE.md file on the source of this repository for details.

Problem: 282A "Bit++"
Direct link: https://codeforces.com/problemset/problem/282/A
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a;
    char buf1[5];
    fgets(buf1, 5U, stdin);
    a = atoi(buf1);

    int x=0;
    for(int i=0; i<a; i++){
        fgets(buf1, 5U, stdin);
        if(buf1[1]=='+') x++;
        else x--;
    }

    printf("%d\n", x);

    return 0;
}
