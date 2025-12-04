#include<stdio.h>
int main(){
int num =890;
printf("The address of num variable is %p\n",&num);
printf("The value at the address of num variable is %d\n",*(&num));
    return 0;
}