#include<stdio.h>
int main(){
  int tables[4][10];
  int table[4] = {2,7,9,8};
  for (int i = 0;i<4;i++){
    printf("Table of ----------------------------------%d-\n\n",table[i]);
   
    for(int j = 0 ;j<10;j++){
        tables[i][j] = table[i] * (j+1);
        printf("%d x %d = %d\n",table[i],(j+1),tables[i][j]);
    }

    printf("\n");

  }
    return 0;
}