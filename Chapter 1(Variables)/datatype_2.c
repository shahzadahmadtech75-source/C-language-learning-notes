/* this is actually a multiline comment 
Author: Shahzad Ahmad
Pogram: C language
Date:33/4/1090 */

#include<stdio.h>
int main(){
//The type of data we assign to a variable is known as datatype.
int aa =10;  //OR
int a;
a = 18;
printf("Size of int: %zu bytes\n ",sizeof(int));

float b=51; //OR
float bb;
bb=55;
printf("Size of float: %zu bytes\n ",sizeof(float));

char d='@'; //Character must be inside single quotes
char dd;
dd='#';
printf("Size of char: %zu bytes\n ",sizeof(char));

printf("%d %.2f %c",aa,bb,dd); // .2 means that we are telling the computer to print float upto two decimals


 return 0;}