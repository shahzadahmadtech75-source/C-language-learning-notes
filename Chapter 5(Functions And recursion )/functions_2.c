#include<stdio.h>
/* Function Prototype: Is the declaration of a function which contains return type(int float char)
 function_name and parameters */

int sum(int ,int); // Function can be declared without variables and with names as sum(int a,int b)
int main(){
	int n1;
	int n2;
	printf("Enter a number \n");
	scanf("%d",&n1);
	printf("Enter another number \n");
	scanf("%d",&n2);

int c = sum(n1,n2);
printf("The sum of %d an %d is %d\n",n1,n2,c);
	return 0;
}

/*Function definition: It includes the instructions which will execute on function calling*/
int sum(int a,int b){
	return a+b;
}
