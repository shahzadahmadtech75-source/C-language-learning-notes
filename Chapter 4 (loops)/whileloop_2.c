#include<stdio.h>
 //Incermenting loop
int main(){
    
    int i = 0;
    while(i<=50){
        printf("Number = %d \n",i);
        i = i+ 1;
    }

    int even = 0;
    while(even<=100){
     if (even %2 ==0)
         printf("Number is even %d\n",even);
        even = even+1;
        }
    
        int user;
        int j = 1;
        int sum = 0;

        printf("Enter a number; \n");
        scanf("%d", &user);
        while(j<=user){
         sum = sum + j;
            j+=1;
        }printf("Sum = %d\n",sum);
        
        int num = 0;
        int person;
   		while(1){
   			printf("Enter number: \n");
        	scanf("%d",&person);
   			num = num + person;
   			if (person == 0){
   			break;
			   }
		   } 
		   printf(" sum of numbers = %d \n",num);



    return 0;
}
