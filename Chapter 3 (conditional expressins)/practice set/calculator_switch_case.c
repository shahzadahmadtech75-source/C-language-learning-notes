#include<stdio.h>
 
int main(){
    
    float n1;
    float n2;
    char operator;
    printf("Enter a number:\n");
    scanf("%f", &n1);
    
    printf("Enter an operator { +, -, *, /}:\n");
    scanf(" %c", &operator);
    
    printf("Enter another number:\n");
    scanf("%f", &n2);
switch (operator){
    case '+':
    printf("Result = %.2f\n",n1 + n2);
    break;
    
    case '-':
    printf("Result = %.2f\n",n1 - n2);
    break;
    
    case '*':
    printf("Result = %.2f\n",n1 * n2);
    break;
    case '/':
        if(n2==0){
            printf("Error :Undefined value \n");
        }else{
            printf("Result = %.2f\n",n1 / n2);
        }
        break;
    
    default:
    printf("Enter a valid operator or a number \n");

}
    return 0;
}