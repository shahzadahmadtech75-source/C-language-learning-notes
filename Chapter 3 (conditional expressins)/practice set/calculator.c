#include<stdio.h>
 
int main(){
    float n1;
    float n2;
    char operator;
    float result;
    printf("Enter a number:\n");
    scanf("%f", &n1);
    
    printf("Enter an operator { +, -, *, /}:\n");
    scanf(" %c", &operator);
    
    printf("Enter another number:\n");
    scanf("%f", &n2);
    if (operator == '+'){
         result = n1+n2;
        printf("Result = %.2f\n",result);
    }
    else if (operator == '-'){
          result = n1-n2;
         printf("Result = %.2f\n",result);
    }
    else if (operator == '*'){
          result = n1*n2;
         printf("Result = %.2f\n",result);
    }
    else if (operator == '/'){
        if(n2 == 0){
            printf("Error division : Undefined number\n");
        }
        else{
          result = n1/n2;
             printf("Result = %.2f\n",result);

        }
         
    }
    else{
        printf("Enter a valid number\n");
    }
    
    return 0;
}