#include<stdio.h>
 float average(float,float ,float);
int main(){
    float n1,n2,n3;
    printf("Enter three numbers \n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    float result = average(n1,n2,n3);
    printf("The average of the given numbers is %.2f\n",result);
    return 0;
}
float average(float a,float b,float c){
    return (a +b +c)/3;
}