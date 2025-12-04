#include<stdio.h>
 
int main(){
    //we can also a string using pointer variable
    char *ptr = "shahzad";
    fputs(ptr,stdout);
    printf("\n");
    //*why to use pointer for strings
    //because using normal string ,we cant update the string while pointer allow us to update the string
    char name[] = "shahzad";
    // name = "harry"; this cause error
    name[2] = 'e';
    fputs(name,stdout);
    
    char *names = "shahzad";
    puts("\n");
    names = "harry";
    fputs(names,stdout);
    return 0;
}