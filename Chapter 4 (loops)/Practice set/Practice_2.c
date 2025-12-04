#include<stdio.h>
int main(){
	//* Table of 10 in reverse order
	int ten=10;
	printf("Table of 10 in reverse order:\n");
	int i=10;
	while(i<=ten){
		if(i==0){
			break;
		}
		printf("%d x %d = %d\n",ten,i,ten*i);
		i--;
		;
	}
	
	//Using for loop
	int num;
	printf("Enter a number:\n");
	scanf("%d",&num);
	for(int n=10;n<=10;n--){
		if(n==0){
			break;
		}
		printf("%d x %d = %d\n",num,n,num*n);
	}
	
	//Using do-while loop
	
	int nums;
	printf("Enter a number:\n");
	scanf("%d",&nums);
	int m=10;
	do{
		printf("%d x %d = %d\n",nums,m,nums*m);
		if(m==0){
			break;
		}
		
		m--;
	}while(m<=10);
	
	
	return 0;
}
