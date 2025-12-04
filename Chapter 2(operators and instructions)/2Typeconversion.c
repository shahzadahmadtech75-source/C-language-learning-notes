#include<stdio.h>
 
int main(){
    
    // Operation on int and int return int
    int a = 7;
    int b = 2;
    printf("division of a/b is %d \n",a/b); //it return 3 instead of 3.5
    
    // Operation on int and float return float
    float a1 = 7.0;
    int b1 = 2;
    printf("division of a/b is %f \n",a1/b1); //it return  3.5
    
    // Operation on float and float return float
    int a2 = 7.0;
    int b2 = 2.0;
    printf("division of a/b is %f \n",a2/b2); //it return 3 instead of 3.5
    return 0;
}