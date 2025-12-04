//* Array is the collection of elements assigned to one variable 
//* In python and js like languages single array or list can store different datatypes
//* But in c one array can store one type of data just like specific variable i-e in t,float,char

#include<stdio.h>
 
int main(){
    int marks[10];// Array is declared which will store marks of 10 students
    marks[0] = 50;
    marks[1] = 20;
    marks[2] = 30;
    marks[3] = 30;
    marks[4] = 40;
    marks[5] = 50;
    marks[6] = 60;
    marks[7] = 70;
    marks[8] = 80;
    marks[9] = 90;
    // printf("The marks on index 3 and 7 are %d and %d respectively\n",marks[3],marks[7]);
    printf("Adresses are %d and %d and %d\n",&marks[0],&marks[1],&marks[2]);
    return 0;
}