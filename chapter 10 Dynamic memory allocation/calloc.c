#include<stdio.h>
#include<stdlib.h>
 
int main(){
    //malloc nitialize the pointer with garbage values while calloc inititalize with 0
    //malloc make space by product of no. of element and element size
    int* crr;
    int size;
    printf("Enter size of the array:\n");
    scanf("%d", &size);
    crr = calloc(size,sizeof(crr));
    
    for(int i = 0;i<size;i++){
        printf("Enter element: \n");
        scanf("%d",&crr[i]);
    }
    
printf("Your array = \n");
    for(int j = 0;j<size;j++){
        printf("%d\n",crr[j]);
    }
    
    return 0;
}