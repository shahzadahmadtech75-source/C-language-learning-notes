#include<stdio.h>
struct vector {
    int i;
    int j;

};
int main(){
  struct vector i_cap = {1,2};
  struct vector j_cap = {3,4};
  printf("The coordinates of i are %d %d and that of j are %d %d\n",i_cap.i,i_cap.j,j_cap.i,j_cap.j);  
    return 0;
}