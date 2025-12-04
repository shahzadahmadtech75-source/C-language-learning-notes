#include<stdio.h>
void printArray(int arr[],int size);
void increment(int arr[],int size);

 int main(){
     int array[7] = {1,2,3,4,5,6,7};
     printArray(array,7);// Printed the original array
     increment(array,7); // incremented every element of the array
     printArray(array,7); // original array got modified 

     //it concludes that when array is passed to a function .the functions works at their adresses not on values and modify the original array
     return 0;
    }

    //array print
    void printArray(int arr[],int size){
       printf("Array = [");
       for(int i = 0;i<size;i++){
           printf("%d",arr[i]);
           if(i<size - 1){
               printf(", ");
           }
       }
          printf("]\n");
   }
   //array modification
   void increment(int arr[],int size){
    printf("[");
    for (int i = 0;i<size;i++){
        arr[i]++;
        printf("%d",arr[i]);
        if (i<size - 1){
            printf(", ");
        }

    }printf("]\n");
   }