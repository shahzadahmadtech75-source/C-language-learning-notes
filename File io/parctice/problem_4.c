#include<stdio.h>
typedef struct employ{
    char name[15];
    int salary;
}employ;
int main(){
    FILE *ptr;
    ptr = fopen("problem_4.txt","a");
    employ em1;
    employ em2;
    employ em3;
    employ em4;

    printf("Enter name of first employ:\n");
    scanf("%s", &em1.name);
    printf("Enter salary:\n");
    scanf("%d", &em1.salary);
    fprintf(ptr,"%s,%d\n",em1.name,em1.salary);

    printf("Enter name of second employ:\n");
    scanf("%s", &em2.name);
    printf("Enter salary:\n");
    scanf("%d", &em2.salary);
    fprintf(ptr,"%s,%d\n",em2.name,em2.salary);

    printf("Enter name of third employ:\n");
    scanf("%s", &em3.name);
    printf("Enter salary:\n");
    scanf("%d", &em3.salary);
    fprintf(ptr,"%s,%d\n",em3.name,em3.salary);

    printf("Enter name of fourth employ:\n");
    scanf("%s", &em4.name);
    printf("Enter salary:\n");
    scanf("%d", &em4.salary);
    fprintf(ptr,"%s,%d\n",em4.name,em4.salary);
    return 0;
}