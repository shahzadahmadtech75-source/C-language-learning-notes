#include<stdio.h>

int main(){
//* Decrementing loop
int user;
printf("Enter a number: \n");
scanf("%d",&user);
printf("Numbers from %d to 0 are: \n",user);
for(int i= 0;i<=user;user--){
	printf("%d\n",user);
}

//* Example 2
int n;
printf("Enter a number: \n");
scanf("%d",&n);
printf("Even Numbers from %d to 0 are: \n",n);
for(int m= 0;m<=n;n--){
	if(n%2==0){
		printf("%d\n",n);
	}
	
}


//* Example 3
int num;
printf("Enter a number: \n");
scanf("%d",&num);
printf("Odd Numbers from %d to 0 are: \n",num);
for(int k= 0;k<=num;num--){
	if(num%2!=0){
		printf("%d\n",num);
	}
	
}


//* Example 4
int number;
int sum = 0;
printf("Enter a number: \n");
scanf("%d",&number);
printf("Even Numbers from %d to 0 are: \n",number);
for(int j= 0;j<=number;number--){
	if(number%2==0){
		printf("%d\n",number);
		sum+=number;
	}
	
}
printf("Sum of even numbers is %d\n",sum);

//* Example 5
int numbers;
int product = 1;
printf("Enter a number: \n");
scanf("%d",&numbers);
printf("Odd Numbers from %d to 0 are: \n",numbers);
for(int l= 1;l<=numbers;numbers--){
	if(numbers%2!=0){
		printf("%d\n",numbers);
		product*=numbers;
	}
	
}
printf("Product of odd numbers is %d\n",product);




return 0;
}

