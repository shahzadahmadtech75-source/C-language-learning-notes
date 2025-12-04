#include<stdio.h>
#include<stdlib.h>
 
 
int main(){
    int* arr;
    arr = calloc(6,sizeof(int));
    printf("Enter element\n");
for(int i = 0;i<6;i++){
    scanf("%d", &arr[i]);
}
for(int i = 0; i < 6;i++){
    printf("%d\n",arr[i]);
}
    return 0;
}