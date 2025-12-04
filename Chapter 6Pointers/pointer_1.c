#include<stdio.h>
int main(){
    //* A pointer is a variable that stores adress of another variable
    // Accessing to the adress of a variable
    int var = 34;
    printf("The adress of var is %p\n",&var);//%p is format specifier of pointer and by using %d and %u it the adress is shown in digits
    
    int *j = &var; // j is a variable pointing to i (stores adress of i)
    printf("Adress of var is %p\n",j);

    //? accesing the value of the pointer
    printf("The value at adress %p is %d\n",j,*(&var));
    printf("The value at adress %p is %d\n",j,*j);

    return 0;
}