#include<stdio.h>
 
int main(){
    FILE *ptr;
    ptr = fopen("problem_2.txt","w");
    int num = 5;
    int i = 1;
    while(i<11){
        fprintf(ptr,"%d x %d = %d\n",num,i,num*i);
        i++;
    }
    return 0;
}