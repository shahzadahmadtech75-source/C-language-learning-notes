#include<stdio.h>
 
int main(){
    FILE *ptr;
    ptr = fopen("problem_1.txt","r");
    int a,b,c;
    fscanf(ptr,"%d %d %d",&a,&b,&c);
    printf("a=%d  b = %d c =%d",a,b,c);
   return 0;
}