#include<stdio.h>
int main(){
    FILE *ptr;// file is a structure datatype
    FILE *pptr; //only pointer can be used to open files 
    ptr = fopen("file_1.txt","r");
    
    int a;
    int b;
    int c;
if (ptr == NULL){
    printf("FILE NOT FOUND!\n");
}else{

    fscanf(ptr,"%d %d %d ",&a,&b,&c);
    printf("a = %d,b = %d,c = %d\n",a,b,c);
    pptr = fopen("file_1.txt","a");
    fprintf(pptr,"\nI am coming baby");    
    fclose(ptr);
    fclose(pptr);
}
return 0;
}