#include<stdio.h>
 
int main(){
    int n1;
    int n2;
    int n3;
    int n4;
    printf("Enter four numbers:\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    scanf("%d", &n4);
    
    if (n1>n2 && n1>n3 && n1>n4){
        printf("%d is the greatest number\n",n1);
    }
    else if(n2>n1 && n2>n3 && n2>n4){
        printf("%d is geatest number\n",n2);
    }
    
    else if(n3>n1 && n3>n2 && n3>n4){
        printf("%d is geatest number\n",n3);
    }
    
    else if(n4>n1 && n4>n2 && n4>n1){
        printf("%d is geatest number\n",n4);
    }
    else{
        printf("Enter a valid number\n");
    }
    
    return 0;
}