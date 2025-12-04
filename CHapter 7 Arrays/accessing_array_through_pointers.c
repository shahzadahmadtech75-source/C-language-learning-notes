#include<stdio.h>
 #define limit 6
int main(){
    int arr[limit] = {10,19,18,17,16,15};
    for (int i = 0; i<limit ; i++){
        printf("The adress of %d is %u\n",i,&arr[i]);
    } // Here we can easily see that addresses are jumping upto four bytes blockes

    int marks[limit] = {10,20,30,40,50,60};
    int *ptr = &marks[0];
    printf("The value at address %u  is %d\n",ptr,*ptr);

    ptr++;
    printf("The value at address %u  is %d\n",ptr,*ptr);

    ptr++;
    printf("The value at address %u  is %d\n",ptr,*ptr);

    ptr++;
    printf("The value at address %u  is %d\n",ptr,*ptr);

    ptr++;
    printf("The value at address %u  is %d\n",ptr,*ptr);

    ptr++;
    printf("The value at address %u  is %d\n",ptr,*ptr);
    // from the above examples we easily find out that pointer incremention goes to the next element in the array not to the next byte
    return 0;
}