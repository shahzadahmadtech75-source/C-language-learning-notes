#include<stdio.h>
#include<stdlib.h>
 
int main(){
    int*arr;
    arr = malloc(6*sizeof(int));
    arr[0] = 1;
    arr[1] = 11;
    arr[2] = 111;
    arr[3] = 1111;
    arr[4] = 11111;
    arr[5] = 111111;
    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);
    printf("%d\n",arr[3]);
    printf("%d\n",arr[4]);
    printf("%d\n",arr[5]);
    return 0;
}