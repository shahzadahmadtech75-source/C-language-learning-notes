#include<stdio.h>
 void reverse(int arr[],int size){
        printf("Reverse Array = [ ");
    for (int i = size - 1;i>=0;i--){
        printf("%d ",arr[i]);
        if(i > 0){
            printf(",");
        }
    }printf("]\n");
 }
int main(){
    int parray[7] = {1,2,3,4,5,6,7};
    reverse(parray,7);
    return 0;
}