//free function works like fclose in file HANDLING 
// IT cleares the space taken by a malloc or calloc array after their usage
// array defined through malloc calloc cant be accessed after using free function and the space can be used for other things
#include<stdio.h>
#include<stdlib.h>
 
int main(){
    int* ree;
    ree = calloc(3,sizeof(int));
    ree[0] = 1;
    ree[1] = 12;
    ree[2] = 13;
    printf("%d\n",ree[0]);
    printf("%d\n",ree[1]);
    printf("%d\n",ree[2]);
    free(ree);
    printf("%d\n",ree[0]);
    printf("%d\n",ree[1]);
    printf("%d\n",ree[2]);

    
    return 0;
}