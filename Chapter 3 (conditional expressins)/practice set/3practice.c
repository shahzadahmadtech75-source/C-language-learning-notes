#include<stdio.h>
 
int main(){
    
    float income;
    
    printf("Enter your income: \n");
    scanf("%f", &income);
    if (income <= 250000){
        printf("You dont have to pay any tax\n");
    }
    else if (income > 250000 && income <= 500000){
        printf("Your annual tax is %.2f \n",(income - 250000) * 0.05);
    }
    
    else if (income > 500000 && income <= 1000000){
        printf("Your annual tax is %.2f\n",((500000 - 250000) 
        * 0.05) + (income - 500000) *0.20);
    }
    
    else if (income > 1000000){
        printf("Your annual tax is %.2f \n",((500000 - 250000) 
        * 0.05) + ((1000000 - 500000) *0.20) + ((income - 1000000) * 0.30));
    }
    
    

    return 0;
}