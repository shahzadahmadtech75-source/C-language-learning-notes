#include<stdio.h>
 void adress(int *a){
    printf("The adress of i  in the function is %p\n",a);
 }
int main(){
    int i;
    printf("The address of i is %p\n",&i);
    adress(&i);
    return 0;
}