#include<stdio.h>
 void display(int row, int col, int arr[row][col]) {
    printf("\nYour array is ready---------------------\n");
    printf("{\n");
    for (int i = 0; i < row; i++) {
        printf("  [");
        for (int j = 0; j < col; j++) {
            printf("%d", arr[i][j]);
            if (j < col - 1) { // comma between elements
                printf(", ");
            }
        }
        printf("]");
        if (i < row - 1) { // comma between rows
            printf(",");
        }
        printf("\n");
    }
    printf("}\n");
}

int main(){
 int array[3][3];
 printf("Enter integers to make a two dimensional array\n");
 for(int i = 0;i<3;i++){
    
    for(int j = 0;j<3;j++){
        printf("Enter value on index row = [%d] col = [%d] ;\n",i,j);
        scanf("%d", &array[i][j]);
        printf("\n");
    }
 }
 display(3, 3, array);
    return 0;
}