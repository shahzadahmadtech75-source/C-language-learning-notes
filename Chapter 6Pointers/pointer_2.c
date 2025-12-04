#include<stdio.h>
 
int main(){
    int i = 100;
    int *j = &i;// store the adress of i
    int **k = &j;//stores the adress of j
    int ***l = &k;//stores the adress of k
    int ****h = &l;//stores the adress of l
    printf("The value of i is %d\n",*j);
    printf("The value of i is %d\n",**k);// this prints adress of i 
    printf("The value of i is %d\n",***l); // Remember Just like -,+ cancels each other *,& also cuts each other and thus this means *j which prints value of i
    printf("The value of i is %d\n",****h);// same same
   

    return 0;
}