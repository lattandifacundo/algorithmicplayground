/*
All rights reserved to Facundo I. Lattandi © 2025.
See LICENSE.md file on the source of this repository for details.

Problem: 158A "Next Round"
Direct link: https://codeforces.com/problemset/problem/158/A
*/

#include <stdio.h>
#include <stdlib.h>

int *split_to_int(char *str){
    unsigned int int_count=1;
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==' ') int_count++;
    }
    int *ans = malloc(int_count*sizeof(int));
    
    char buf[11];
    int flag=0, shift=0, i=0;
    while(!flag){
        int inner_shift=shift;
        for(int j=shift; str[j]!=' '; j++){
            buf[j-inner_shift]=str[j];
            shift=j+2;

            if(str[j+1]==' '){
                buf[j-inner_shift+1] = '\0';
            }
            
            if(str[j+1]=='\n' || str[j+1]=='\0'){
                buf[j-inner_shift+1] = '\0';
                flag=1;
                break;
            }
        }
        ans[i]=atoi(buf);
        i++;
    }

    return ans;
}

int main(void){
    char buf[201];
    
    fgets(buf, 7, stdin); // 2 + 1 + 2 + \n + \0
    int *temp=split_to_int(buf);
    int n=temp[0], k=temp[1];
    free(temp);

    fgets(buf, 201, stdin); // 50*3 + 49 + \n + \0
    int *arr=split_to_int(buf);
    int c=0;
    for(int i=0; i<n; i++){
        if(arr[i]>0 && arr[i]>=arr[k-1]) c++;
    }
    free(arr);

    printf("%d\n", c);

    return 0;
}
