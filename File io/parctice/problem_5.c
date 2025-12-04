#include<stdio.h>
 
int main(){
    FILE *ptr;
    ptr = fopen("problem_5.txt","r");
    int a;
    fscanf(ptr,"%d",&a);
    printf("%d\n",a);
    fclose(ptr);
    FILE *pptr = fopen("problem_5.txt","w");
    fprintf(pptr,"%d",a*2);
    fclose(pptr);

    return 0;
}