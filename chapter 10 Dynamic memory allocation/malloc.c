#include<stdio.h>
#include<stdlib.h>
 
int main(){
 int* arr;
 arr = malloc( 5 * sizeof(int) );
 if(arr == NULL){
    printf("Memory not allocated\n");
 }else{

     arr[0] = 1;
     arr[1] = 2;
     arr[2] = 3;
     arr[3] = 4;
     arr[4] = 5;
    }
 printf("%d\n",arr[0]);
 printf("%d\n",arr[1]);
 printf("%d\n",arr[2]);
 printf("%d\n",arr[3]);
 printf("%d\n",arr[4]);

 //Quick quiz
 float* farr;
 farr = malloc(5*sizeof(float));
 farr[0] = 10.5;
 farr[1] = 12.5;
 farr[2] = 13.5;
 farr[3] = 14.5;
 farr[4] = 15.5;
 printf("%.1f\n",farr[0]);
 printf("%.1f\n",farr[1]);
 printf("%.1f\n",farr[2]);
 printf("%.1f\n",farr[3]);
 printf("%.1f\n",farr[4]);
 
    return 0;
}