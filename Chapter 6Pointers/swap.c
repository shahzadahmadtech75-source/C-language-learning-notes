#include<stdio.h>
void change(int *,int*); 
int main(){
    int x = 20;
    int y = 30;
    change(&x,&y);
    printf("The value of x is %d and y is %d\n",x,y);
    return 0;
}
void change(int* a,int* b){
    int changer = *a;
    *a = *b;
    *b = changer;
}