#include<stdio.h>
#include<string.h>
 struct employ1{
     int code;
     int salary;
     float height;
     char name[];
 };
int main(){
    struct employ1 e1;
    e1.code = 777;
    e1.salary = 50000;
    e1.height = 1.83;
    strcpy(e1.name,"shahzad");
    printf("Identity code = %d \n",e1.code);
    printf("Salary = %d\n",e1.salary);
    printf("Height = %.2f \n",e1.height);
    printf("Name = %s \n",e1.name);
    return 0;
}