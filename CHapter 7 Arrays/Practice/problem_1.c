#include<stdio.h>
 
int main(){
    int elem[10] ={10,20,30,40,50,60,70,80,90,100};
    int* ptr = &elem[0];
    printf("The value is %d\n",*ptr); // First element
    *(ptr + 2);
    printf("The value is %d\n",*( ptr+ 2)); // third element element

    
       *(ptr+2) == elem[2]? printf("Verified : The value is jumped to third one \n"):printf("Logic is not correct\n");

    return 0;
}