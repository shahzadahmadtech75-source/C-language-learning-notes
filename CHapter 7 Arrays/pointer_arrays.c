// Pointer Arithmic
//* Pointer incrementation is not liike a normal variamal incrementation which is incremented by the certain value which is used for incrementation like int a = 1=> a+=2 == 3;
// pointer is incremented according to the datatype space taking in memory like int takes four bytes so for int pointer is incremented by 1 jumps upto four bytes away.
#include<stdio.h>
 
int main(){
    // int pointer jumps upto four bytes
    int a = 12;
    int *ptr = &a;
    printf("the aadddress o f a is %u \n",ptr);
    *ptr++;
    printf("The address of next pointer is %u \n",*ptr);
    
    // char pointer jumps to the next byte
    // flour pointer jumps upto four bytes 
    // double pointer jumps to eight bytes
    return 0;
}