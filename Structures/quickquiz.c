#include<stdio.h>
#include<string.h>
struct employ {
    int code;
    float height;
    char name[10];
};

int main(){
    struct employ e1;
    e1.code;
    e1.name;
    e1.height;
    printf("ENter employ 1 code : \n");
    scanf("%d", &e1.code);
    printf("Enter height: \n");
    scanf("%f", &e1.height);
    printf("Enter name of the employ\n");
    scanf("%s", &e1.name);
    
    struct employ e2;
    e2.code;
    e2.name;
    e2.height;
    printf("ENter employ 2 code : \n");
    scanf("%d", &e2.code);
    printf("Enter height: \n");
    scanf("%f", &e2.height);
    printf("Enter name of the employ\n");
    scanf("%s", &e2.name[10]);
    
    struct employ e3;
    e3.code;
    e3.name;
    e3.height;
    printf("ENter employ 3 code : \n");
    scanf("%d", &e3.code);
    printf("Enter height: \n");
    scanf("%f", &e3.height);
    printf("Enter name of the employ\n");
    scanf("%s", &e3.name);

    printf("Employs data:\n");
    printf("Name = %s\n",e1.name);
    printf("Code = %d\n",e1.code);
    printf("Height = %.2f\n",e1.height);
    
    printf("Name = %s\n",e2.name);
    printf("Code = %d\n",e2.code);
    printf("Height = %.2f\n",e2.height);
    
    printf("Name = %s\n",e3.name);
    printf("Code = %d\n",e3.code);
    printf("Height = %.2f\n",e3.height);

    return 0;
}