#include<stdio.h>
 
int main(){
    int year;
    int days;
    printf("Enter year;\n");
    scanf("%d", &year);
    
    printf("Enter number of days in that year:;\n");
    scanf("%d", &days);    
    if (days == 365){
        printf("It is a not a leap year\n");
    }
    
    else if (days == 366){
        printf("It is a leap year\n");
    }
    else{
        printf("Enter valid days: You are on Earth now.\n");
    }

    // Calculating Method
    int years;
    printf("Enter the year : \n");
    scanf("%d", &years);
    if(years % 4 == 0 && years%100 != 0 || years%400 == 0){
        printf("This is a leap year\n");
    }
    else{
        printf("This is not a leap year.\n");
    }
    
    
    return 0;
}