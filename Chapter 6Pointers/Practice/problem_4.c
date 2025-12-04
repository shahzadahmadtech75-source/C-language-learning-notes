#include<stdio.h>
 void change(int *a){
    *a = *a * 10;
    
 }
int main(){
    int a = 40;
    change(&a);
    printf("The value of a is %d now\n",a);
    return 0;
}