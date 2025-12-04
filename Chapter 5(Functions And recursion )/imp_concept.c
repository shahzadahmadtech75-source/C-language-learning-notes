//*
#include<stdio.h>
 int change(int a){ // THis shows that this function changes values
  return a = 99;
 }
int main(){
    
    int b = 24;
   change(b); // Here copy of b means value of b goes to change function not b itself so functions works on value not b therefore b remains the same 
   int c = change(b);
    printf("The updated value of B is also %d\n",b);
    printf("The stored value is %d\n",c);
    return 0;
}