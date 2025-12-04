#include<stdio.h>

int main(){
printf("Welcome to calculate simple interest:  \n");
float principal;
float rate;
float years;
printf("Enter principal amount: \n");
scanf("%f",&principal );

printf("Enter annual rate of interest: \n");
scanf("%f",&rate );

printf("Enter time in years: \n");
scanf("%f",&years );
float simple_interest = (principal * rate * years)/ 100;
printf("Simple Interest = %.2f \n",simple_interest);

return 0;
}

