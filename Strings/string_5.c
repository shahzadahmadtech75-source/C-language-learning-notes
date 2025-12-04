#include<stdio.h>
#include<string.h>
 
int main(){
    //* Now we will look at some interesting string functions using string library
    char string[] = "kingdom";
    printf("The length of string is %d\n",strlen(string));//strlen returns the length of the string without counting the null character

    char paste[10];
    strcpy(paste,string); // This function copies the second string into first one 
    printf("%s\n",paste);

    char add[20] = "united ";
    strcat(add,string);//this function add or concates the second string into first one
    printf("%s\n",add);

    // strcmp is a function to compare the given two strings and return values according to the given comditions
    //* if both are equal it returns 0
    //* if first string comes first in dictionary then  it returns negative value
    //* if secong string comes first in dictionary then  it returns positive value
    printf("%d\n",strcmp("zebra","zebra"));// case sensitive for capital and small letters
    printf("%d\n",strcmp("zebra","rebra"));
    printf("%d\n", strcmp("hebra","zebra"));
    printf("%d\n", strcmp(string,paste));
    
    
    return 0;
}