// realloc resize the array made through calloc or malloc
#include<stdio.h>
#include<stdlib.h>
 
int main(){
    int* array;
    array = calloc(3,sizeof(int));
    array[0] = 10;
    array[1] = 20;
    array[2] = 30;
    printf("%d\n",array[0]);
    printf("%d\n",array[1]);
    printf("%d\n",array[2]);
    array = realloc(array,5*sizeof(int));
    array[3] = 40;
    array[4] = 50;
    printf("%d\n",array[3]);
    printf("%d\n",array[4]);

    int*arramac;
    arramac = malloc(6*sizeof(int));
    arramac[0] = 1;
    arramac[1] = 2;
    arramac[2] = 3;
    arramac[3] = 4;
    arramac[4] = 5;
    arramac[5] = 6;
    arramac = realloc(arramac,3*sizeof(int));
    printf("%d\n",arramac[4]);
    printf("%d\n",arramac[5]);

    return 0;
}