#include<stdio.h>
#include<string.h>
struct student {
    int roll_no;
    char name[10];
    char father_name[15];
    char home_town[15];

};
void show(struct student data);
void show(struct student data){
    printf("The name of the student is %s.\n",data.name);
    printf("Father name of %s is %s.\n",data.name,data.father_name);
    printf("Roll number of %s is %d.\n",data.name,data.roll_no);
    printf("%s lives in %s city.\n",data.name,data.home_town);
}
 
int main(){
    struct student student1;
    strcpy(student1.name,"Shahzad");
    student1.roll_no = 31;
    strcpy(student1.father_name,"Tajmeer Khan");
    strcpy(student1.home_town,"Peshawar");
    
  struct student student2;
    strcpy(student2.name,"Ahsan");
    student2.roll_no = 55;
    strcpy(student2.father_name,"Safdar Khan");
    strcpy(student2.home_town,"Kohat");


    show(student1);
    printf("\n");
    show(student2);
    return 0;
}