// typedef is a keyword which can be used to rename a datatype as;
#include<stdio.h>
#include<string.h>
 //* but is used for structures for more convenience
     typedef struct student{
        int roll_no;
        char name[10];
    } std; // std is the datatype ,will be used instead of whole structure name
    //***************************************** */
    typedef struct complex_number {
        int real;
        int imaginary;
    }complex;
    //************************************************* */
int main(){
    typedef int shah;//here we rename int with shah and now we can use shah for declaring an integer variable
    shah num = 123;
    shah num1 = 123;
    shah plus = num + num1;
    printf("The sum is %d\n",plus);//it works

    printf("\n");
    // typedef struct student std; We can also typedef here
    // struct student student1; //*instead of using this just write; 
    std student1;
    student1.roll_no = 233;
    strcpy(student1.name,"SHahzad");
    printf("%d\n",student1.roll_no);
    printf("%s\n",student1.name);
    //*****************************************
    complex n1;
    n1.real = 12;
    n1.imaginary = 5;
    printf("The complex number is %d + %di\n",n1.real,n1.imaginary);
   

    return 0;
}