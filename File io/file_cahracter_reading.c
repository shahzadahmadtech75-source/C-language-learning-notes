#include<stdio.h>
 
int main(){
    FILE *ptr;
    char c;
    FILE *pptr;
    char b = 'y';
    ptr = fopen("character.txt","r");
    c = fgetc(ptr);
    printf("%c\n",c);
    pptr =  fopen("character.txt","a");
       fputc(b,pptr);
       fclose(pptr);


    return 0;
}