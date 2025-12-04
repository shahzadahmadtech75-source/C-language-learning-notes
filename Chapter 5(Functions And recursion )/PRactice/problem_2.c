#include<stdio.h>
 float farenheit(float x);
int main(){
    float celcius;
    printf("Enter temperature in celcius \n");
    scanf("%f", &celcius);
    float result = farenheit(celcius);
    printf("THE temperature in farenheit is %.2f\n",result);
    return 0;
}
float farenheit(float x){
    return (x * 9/5) + 32;
}