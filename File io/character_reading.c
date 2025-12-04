#include<stdio.h>
// EOF means end of file : we can read strings through character by character with the use eof  
int main(){
    FILE *ptr;
    ptr = fopen("read.txt","r");
    while(1){
        char read = fgetc(ptr);
        if(read == EOF){
            return 0;
        }else{
            printf("%c",read);
        }
    }
    return 0;
}