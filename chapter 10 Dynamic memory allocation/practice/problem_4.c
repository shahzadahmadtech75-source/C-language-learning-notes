#include<stdio.h>
#include<stdlib.h>
 
int main(){
    int *table;
    int num = 7;
    table = malloc(10*sizeof(int));
    for(int i = 0; i < 10;i++){
    
        table[i] = num*(i+1);
    }
    for(int i = 0; i < 10;i++){
       
        printf("%d\n",table[i]);
    }

     table = realloc(table,15*sizeof(int));
    for(int i = 0; i < 15;i++){
    
        table[i] = num*(i+1);
    }
    for(int i = 0; i < 15;i++){
       
        printf("%d\n",table[i]);
    }
    return 0;
}