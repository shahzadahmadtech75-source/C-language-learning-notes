#include<stdio.h>
#define  LIMIT 5
int main(){
    int marks[LIMIT];
    printf("Enter five numbers: \n");
    for(int i = 0;i<LIMIT;i++){
        scanf("%d", &marks[i]);
    }
    printf("Marks Array = [");
    for(int i = 0;i<LIMIT;i++){
        printf("%d ",marks[i]);
        if (i < LIMIT ){
            printf(",");
        }
    }
    printf("]");
    return 0;
}