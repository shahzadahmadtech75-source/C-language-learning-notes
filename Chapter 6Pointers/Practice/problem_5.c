#include<stdio.h>
 int sum(int* a,int* b,int* sum ,int* avg){
    *sum = *a + *b;
    *avg = *sum/2;
 }
int main(){
    int x = 30;
    int y = 30;
    int addition,average; 
    sum(&x,&y,&addition,&average);
    printf("The sum of given values is %d and average is %d\n",addition ,average);
    // printf("The sum of given numbers is %d and average of the given numbers is %d\n",sum(&x,&y,&addition,&average));
    return 0;
}