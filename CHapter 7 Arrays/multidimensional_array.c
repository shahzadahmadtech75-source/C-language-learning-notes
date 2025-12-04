#include<stdio.h>
 
int main(){
    int array[4][5] = {
        {1,2,3,4,5},
        {11,22,33,44,55},
        {111,222,333,444,555},
        {10,20,30,40,50}
    };
    
    // printf("The element on index 0 0 is %d\n",array[0][0]);
    // printf("The element on index 2 2 is %d\n",array[2][2]);
    // printf("The element on index 3 4 is %d\n",array[3][4]);
    printf("{\n");
for (int i = 0; i < 4; i++) {
    printf("  [");
    for (int j = 0; j < 5; j++) {
        printf("%d", array[i][j]);
        if (j < 4) { // print comma **after every element except last**
            printf(", ");
        }
    }
    printf("]");
    if (i < 3) { // print comma after row except last
        printf(",");
    }
    printf("\n");
}
printf("}\n");

    return 0;
}