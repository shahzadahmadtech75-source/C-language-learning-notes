#include<stdio.h>
 
int main(){
    
    //Modular operator

    int n1 = 20;
    int n2 = 6;
    printf("REmainder is %d\n",n1%n2);

    // float n11 = 20.5;
    // float n22 = 6.0;
    // printf("REmainder is %d\n",n11%n22);  //it doesnt work on floats

    
    int n = -20;
    int u =6;
    printf("REmainder is %d\n",n%u); // The sign of remainder is linked with sign of numerator 


    return 0;
}