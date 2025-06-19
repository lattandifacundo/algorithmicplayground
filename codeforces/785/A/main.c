/*
All rights reserved to Facundo I. Lattandi © 2025.
See LICENSE.md file on the source of this repository for details.

Problem: 785A "Anton and Polyhedrons"
Direct link: https://codeforces.com/problemset/problem/785/A
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int n; char buf[14];

    fgets(buf, 8, stdin); //6 + \n + \0
    n=atoi(buf);

    int c=0;
    for(int i=0; i<n; i++){
        fgets(buf, 14, stdin); //12 + \n + \0
        if(!strcmp(buf, "Tetrahedron\n")) c+=4;
        else if(!strcmp(buf, "Cube\n")) c+=6;
        else if(!strcmp(buf, "Octahedron\n")) c+=8;
        else if(!strcmp(buf, "Dodecahedron\n")) c+=12;
        else if(!strcmp(buf, "Icosahedron\n")) c+=20;
    }

    printf("%d\n", c);

    return 0;
}