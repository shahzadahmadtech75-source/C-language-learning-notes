#include<stdio.h>
 
int main(){
    // strings can be written as 
    char name[] = "shahzad";
    printf("%s\n",name);

    // taking string as an input
    char names[10];
    printf("Enter your name: \n");
    scanf("%s", names);// array is already considered as adress of first element so & is not necessary
    printf("%s\n",names);
    return 0;
}