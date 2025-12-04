#include<stdio.h>


int main(){
	
// Using for loop	
int user;
int factorial = 1;
printf("Enter a number  \n");
scanf("%d",&user );
printf(" \n");
printf("Multiplying All........ \n");
printf(" \n");
for (int i =1;i<=user;i++){
	
	printf("%d x ",i);
	printf(" \n");
	factorial*=i;

}
printf(" \n");
printf("Factorial of numbers upto %d is  %d\n",user,factorial);

//using while loop
int num;
int product = 1;
int j = 1;
printf("Enter a number  \n");
scanf("%d",&num );
printf(" \n");
printf("Multiplying All........ \n");
printf(" \n");
while(j<=num){

	printf("%d x ",j);
	printf(" \n");
	product*=j;
	j++;
}
printf(" \n");
printf("Factorial of numbers upto %d is  %d\n",num,product);



return 0;
}

