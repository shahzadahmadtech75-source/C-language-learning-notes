#include<stdio.h>
#include<string.h>
 struct person {
    char name[10];
    int code;
    int house_address;
 };
int main(){
    struct person p1;
    struct person *ptr; // Declared a pointer variable using structure
    p1.code = 1122;
    p1.house_address = 786;
    strcpy(p1.name,"Personality");

    ptr = &p1; // storing the adress of a structure variable in pointer variable

    printf("%d\n",(*ptr).code);//accessing through dereferencing
    printf("%d\n",(*ptr).house_address);
    printf("%s\n",(*ptr).name);

    printf("%d\n",ptr->code);// we can also access structure properties through arrow operator 
    printf("%d\n",ptr->house_address); 
    printf("%d\n",ptr->name); 
       return 0;
}