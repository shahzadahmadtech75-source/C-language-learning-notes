#include<stdio.h>
 
int main(){
    
    int a = 9.54;
    printf(" a is %d \n",a); // In c float assigned to int is considered as int by removing decimals
    //This is called demotion of float into int because int is not able to store floats
    
    float a1 = 9;
    printf(" a is %f \n",a1); //similarly int assigned to float is considered as float by making it decimal
    //This is called promotion of int into flaot because float is not able to store ints
    int k = 3.0;

    //Quiz
    printf(" %d \n",k/9); //returns 0 instead of 0.333 bcs k is int and cant store float
    return 0;
}