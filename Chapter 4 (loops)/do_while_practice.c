#include<stdio.h>
 
int main(){
    
        // countdown
    int user;
    int n = 1;
    printf("Enter a number: \n");
    scanf("%d", &user);   
    printf("You have %d seconds to survive;\n",user);
    printf("              Countdown Starts now; \n");
    
    do{
        printf("Alert %d\n",user);
        --user;
    }while(n<=user);
    printf("Get ready for boom.Your time is finished bob.\n");
    
    int number;
    int num = 0;
    int sum = 0;
    printf("Enter a number; \n");
    scanf("%d", &number);
    printf("Sum of even nubers upto %d is given below\n",number);
    do{
        
        num++;
        
        if(num%2==0){
            printf("Even numbers are %d\n",num);
            sum+=num;
        }
         
        
    }while(num<=number);
     printf("SUm of even numbers are %d\n",sum);

    return 0;
}