#include<stdio.h>
int main(){
    FILE *ptr;
    FILE *pptr;
    ptr = fopen("problem_3.txt","r");
    pptr = fopen("problem_33.txt","a");
    while(1){
        char read = fgetc(ptr);
        // fscanf(ptr,"%c",&read);
        if(read == EOF){
            return 0;
        }else{
            printf("%c",read);
            fprintf(pptr,"%c",read);
            
        }
    }

    return 0;
}