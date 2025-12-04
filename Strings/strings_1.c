#include<stdio.h>
 
int main(){
    // String is just an array of characters  with null character as last element 
    // the null tells that string is terminated here
    char name[] = {'s','h','a','h','z','a','d','\0'};
    //accessing string element like array
    printf("%c\n %u",name[0],&name[0]);
    printf("%c\n %u",name[1],&name[1]);
    printf("%c",name[2]);
    printf("%c",name[3]);
    printf("%c",name[4]);
    printf("%c",name[5]);
    printf("%c\n",name[6]);
    printf("%s\n",name);
    return 0;
}