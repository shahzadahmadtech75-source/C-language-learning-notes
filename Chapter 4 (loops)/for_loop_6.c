#include<stdio.h>
 
int main(){
    ///* For loop is used to repeat an iteration based on certain condition
    //? for(variable initialization; condition; increment or decrement){
//? loop body }*/

int user;

printf("Enter a natural number: \n");

scanf("%d", &user);

for(int i=0; i<=user; i++){
    printf("Number is %d\n",i);
}

int n;
printf("Enter a number : \n");
scanf("%d",&n);
printf("Even numbers upto %d\n",n);
for(int m = 0;m<=n; m++){
	if(m%2==0){
		printf("%d\n",m);
	}
}
int u;
int product = 1;
printf("Enter a number :  \n");
scanf("%d",&u);
printf("Even numbers upto %d\n",u);

for(int j = 1; j<=u; j++){
	if (j%2==0){
		printf("%d\n",j);
		product = product *j;
	}
	
	
}

printf("The product of even numbers upto %d is %d\n",u,product);

int shahzad;
printf("Enter your time :  \n");
scanf("%d",&shahzad);
printf("You have only %d seconds to survive\n",shahzad);
printf("Countdown started: \n");
for(int shah = 1;shah<=shahzad;--shahzad){

	printf("%d\n",shahzad);
}
	
	
printf("Your times ends here Dude. \n");


    return 0;
}
