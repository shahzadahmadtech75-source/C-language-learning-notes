// just ike normal variables array ,structure array can also be declared
#include<stdio.h>
#include<string.h>
 struct student {
    int marks;
    float gpa;
    char name[15];
 };
int main(){
    struct student boys[3];
    boys[0].marks = 97;
    boys[0].gpa = 2.7;
    strcpy(boys[0].name, "Shahzad");
    printf("Name = %s\n",boys[0].name);
    printf("Marks = %d\n",boys[0].marks);
    printf("GPA = %.2f\n",boys[0].gpa);

    printf("\n");

     boys[1].marks = 98;
    boys[1].gpa = 3.7;
    strcpy(boys[1].name, "GulBadeen");
    printf("Name = %s\n",boys[1].name);
    printf("Marks = %d\n",boys[1].marks);
    printf("GPA = %.2f\n",boys[1].gpa);

     printf("\n");
     boys[2].marks = 99;
    boys[2].gpa = 4.0;
    strcpy(boys[2].name, "Athar Bukhaari");
    printf("Name = %s\n",boys[2].name);
    printf("Marks = %d\n",boys[2].marks);
    printf("GPA = %.2f\n",boys[2].gpa);

    //* Structures can also be initialized as
    struct student athar = {45,1.5,"athar bukhari"};
    printf("%s\n",athar.name);
    printf("%.2f\n",athar.gpa);
    printf("%d\n",athar.marks);
    return 0;
}