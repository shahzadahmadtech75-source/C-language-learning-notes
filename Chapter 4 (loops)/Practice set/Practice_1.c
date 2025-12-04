#include<stdio.h>
int main(){
	//* Practice 1:Multiplication table
	//using while loop
	int user;
	printf("Enter a number for multiplication: \n");
	scanf("%d",&user);
	int i=1;
	while(i<=10){
		printf("%d x %d = %d\n",user,i,user*i);
		i++;
	}
	
	//using for loop
	int users;
	printf("Enter a number for multiplication: \n");
	scanf("%d",&users);
	for(int j=1;j<=10;j++){
		printf("%d x %d = %d\n",users,j,users*j);
	}
	
	//Using do-while loop
	int num;
	printf("Enter a number for multiplication: \n");
	scanf("%d",&num);
	int k=1;
	do{
		{
		printf("%d x %d = %d\n",num,k,num*k);
		k++;
	}	
	}
	while(k<=10);
	
	return 0;
}
