#include<stdio.h>
 void no_of_positive_integers(int arr[], int size){
    int count = 0;
    for (int i = 0;i<size;i++){
        arr[i];
        if(arr[i] > 0){
            count++;
        }

    }
    printf("Number of positive integers is %d\n",count);
 }

int main(){
    int list[11] = {-1,1,-2,2,-3,3,-4,4,-5,5,56};
    no_of_positive_integers(list , 11);
    return 0;
}