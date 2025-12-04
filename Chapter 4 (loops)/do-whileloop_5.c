#include<stdio.h>
 
int main(){
    
    //* DO While :- Compilation of Do WHile loop
    //* This loop executes at least once
    //* The loop body is written in do{}
    //* Then it checks the condition in while(){}
    //* If condition is true then do executes again 
    //* If condition is false means nothing more to do so loop terminates
    int i = 0;

    do{
        printf("%d\n",i); //? HEre i will be executed as 0 before the condition
        i++; //* Here i is incremented and condition  is checked untill condion become false . prints 1-10
    }while(i<=10);

    int num;
    int n = 1;
    printf("ENter a number; \n");
    scanf("%d", &num);
    do{
        // n++; //* Incremented before print so numbers start from 2
        printf("Number %d\n",n);
        n++; //* Incremented after print so numbers start from 1
    }while(n<=num);

    return 0;
}