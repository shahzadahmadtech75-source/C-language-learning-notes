#include<stdio.h>
 // As we mentioned earlier that  a value called in function is the copy of value not the actual variable 
 //* Now its time to play with acctual variables using pointers
 void sum(int* a, int* b);
int main(){
    int x = 12;
    int y = 18;
    sum(*(&x),*(&y)); // The values are taken by references (addresses) and now we can change value of x and y as by changing values in the function. 
    //* After changing values in function value of x and y are also changed and prints 50
    printf("The value of x is %d\n",x);// x is changed to 30
    return 0;
}
void sum(int* a,int* b){
    *a = 30;
    *b = 20;
    printf("The sum of given values is %d\n",*a + *b);
}