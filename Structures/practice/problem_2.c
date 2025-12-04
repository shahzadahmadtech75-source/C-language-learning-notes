#include<stdio.h>
typedef struct vector {
    int i;
    int j;
 } pint;
pint sumVector(pint  x,pint y){
    pint sum = {x.i + y.i,x.j + y.j};
    return sum;
 }
int main(){
    pint x = {10,20};
    pint y = {90,80};
    pint z = sumVector(x,y);
    printf("The sum of the coordinates of x is %d and that of y is %d\n",z);
    return 0;
}