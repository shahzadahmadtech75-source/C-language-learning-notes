#include<stdio.h>
 
int main(){
    
int a = 10; 
if (a = 11) //Inside if non zero value is considered as true,here 11 is a nonzero.And specially we have assigned 11 to a not compared that why.
    printf("I am 11\n"); 
else  
    printf("I am not 11\n");

int b = 10; 
if (b == 11) //Here it is compared not assigned thats why it returns false.
    printf("I am 11"); 
else  
    printf("I am not 11"); 
    return 0;
}