#include<stdio.h>

int main(){
printf("Convert temperature from celcius into farenheit: \n");
int temperature;
float part = 9.0/5.0;
int side = 32;
float farenheit;
printf("Enter temperature in Celcius: \n");
scanf("%d",&temperature );
farenheit = temperature * part + side; // or use direct formula (temperature * 9/5 +32)
printf("The temperature in farenheit is %.2f degree \n",farenheit);

return 0;
}

