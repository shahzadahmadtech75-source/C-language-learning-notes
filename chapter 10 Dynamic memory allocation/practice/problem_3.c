#include<stdio.h>
#include<stdlib.h>
 
int main(){
    int *arr;
    arr = malloc(5*sizeof(int));
    arr = realloc(arr,10*sizeof(int));
    printf("Enter elements\n");
    for(int i = 0; i < 10;i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 10;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}