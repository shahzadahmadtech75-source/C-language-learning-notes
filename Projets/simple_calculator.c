#include<stdio.h>
#include<math.h>
 void menu();

int main(){
    int choice;
    double first,second,result;
    while(1){
        menu();
        scanf("%d", &choice);
        if (choice == 7){
            break;
        }
        if(choice < 1 || choice >7){
            printf("\nInvalid choice");
            continue;
        }
        printf("\nEnter first number: ");
        scanf("%lf", &first);
        printf("\nEnter second number: ");
        scanf("%lf", &second);
        switch (choice){
            case 1:
            result = first + second;
            break;
            
            case 2:
            result = first - second;
            break;
            
            case 3:
            result = first * second;
            break;
            
            case 4:
            if(second == 0){
                printf("\nInvalid argument! Division failed.\n");
                continue;
            }else{
                result = first / second;
                break;
            }
            
            case 5:
             if(second == 0){
                printf("\nInvalid argument! Modulus failed.\n");
                continue;
            }else{
                result = (int)first % (int)second;
                break;
            }

            case 6:
            result = pow(first,second); 
        }
        printf("\nResult is %.2lf",result);
    }
    
    
    

    return 0;
}
void menu(){
    printf("\n-------------------------------------");
    printf("\nWelcome to our Simple Calculator.");
    printf("\nWhat you want to calculate.");
    printf("\n1. Add");
    printf("\n2. Subtract");
    printf("\n3. Multiply");
    printf("\n4. Divide");
    printf("\n5. Modulus");
    printf("\n6. Power");
    printf("\n7. Exit");
    printf("\nEnter your choice: ");
    

}
