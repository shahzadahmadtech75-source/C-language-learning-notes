//* We can also initialize array 

#include<stdio.h>
 
int main(){
    int container[5] = {12,12,23,34,45};
    printf("Array = [");
    for (int i = 0;i<5;i++){
        printf("%d ",container[i]);
        if (i < 5 - 1){
            printf(",");
        }
    }
    printf("]\n");
    //* we can also initialize without giving size
    int list[] = {1,2,3,4,5,6,78,9,9,8};
    printf("array = [");
    for(int j = 0;j<10;j++){
        printf("%d ",list[j]);
        if(j<10 - 1){
            printf(",");
        }
    }
    printf("]");
    return 0;
}