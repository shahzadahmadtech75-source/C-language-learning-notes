#include<stdio.h>
 typedef struct complexNumber {
    int real;
    int i;
 } complex;
int main(){
    complex number;
    number.real = 20;
    number.i = 14;
    printf("The complex number is %d+%di. \n%d is the real part.\n%d is the imaginary part. ",number.real,number.i,number.real,number.i);
    return 0;
}