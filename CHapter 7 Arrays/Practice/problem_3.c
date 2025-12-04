#include<stdio.h>
 
int main(){
    int arr[10];
    int five  = 5;
    for(int i = 0;i<10;i++){
        arr[i] = five * (i+1);
        printf("5 x %d = %d\n",i +1,arr[i]);
    }
    
    return 0;
}