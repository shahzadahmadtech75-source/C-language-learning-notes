#include<stdio.h>
 
int main(){

    int anteger;
    int a = 30;
    
    float b = 55.4;

    // How to typecast
    anteger = (int) b; //convert datatype into int
    b = (float) a; //convert datatype into float

    printf("B is typecasted into integer as %d\n",anteger);
    printf("C is typecasted into float as %f\n",b);
    return 0;
}
