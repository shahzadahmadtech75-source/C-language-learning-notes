#include<stdio.h>
void change(int a,int b){
    int tem;
    tem = a;
    a = b;
    b = tem;
}
int main(){
    int x = 34;
    int y = 44;
    change(x,y);
    printf("The value of x is %d and that of y is %d\n",x,y);
    return 0;
}