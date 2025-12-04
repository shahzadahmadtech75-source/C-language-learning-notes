#include<stdio.h>
//practice 3 using for loop
int main(){
int sum = 0;
printf("Adding.....\n");
for(int i = 0; i<=10; i++){
	printf("%d + ",i);
	sum+=i;
}
printf("\n");
printf("Sum of first natural numbers is %d \n",sum);


// using do-while loop
printf("\n");
int add = 0;
printf("Adding.....\n");
int j = 0;
do{
	printf("%d + ",j);
	add+=j;
	j++;
	
}while(j<=10);
printf("\n");
printf("Sum of first natural numbers is %d \n",add);

return 0;
}

