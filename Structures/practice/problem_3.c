#include<stdio.h>
#include<string.h>
 typedef struct worker {
    char name[10];
    int salary;
 } wrkr;
int main(){
    wrkr mazdoor;
    wrkr* ptr;
    ptr = &mazdoor;
   strcpy( ptr->name , "Sajid");
    ptr->salary = 20000;
    printf("The name of mazdoor is %s and  his salary is %d \n",ptr->name,ptr->salary); 
       return 0;
}