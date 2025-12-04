#include<stdio.h>
 
int main(){
    int n1,n2,n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    // scanf("%d", &n2);
    // scanf("%d", &n3);
    int tables[3][10];
    int table[3]= {n1,n2,n3};
    for(int i=0;i<3;i++){
        printf("Table of %d\n",table[i]);
        for(int j=0;j<10;j++){
            tables[i][j] = table[i] * (j+1);
            printf("%d x %d = %d\n",table[i],(j+1),tables[i][j]);
        }
        printf("\n");
    }
    return 0;
}