#include<stdio.h>
 
int main(){
    
    //  3*x/y – z+k, where x=2, y=3, z=3, k=1 
    int x = 2;
    int y = 3;
    int z = 3;
    int k = 1;
    /*
    () executes first
    3*2 = 6 Mutiplications and division  executes first and in order from left to right
    
    6/3 = 2 

    2 - 3 = -1  add and subtract executes from left to right dont priority needed 
    
    -1 +1  = 0*/
    printf("%d \n",3*x/y - z+k);
    return 0;
}