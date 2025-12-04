#include<stdio.h>

int main(){
int eight = 8;
int i = 1;
int sum = 0;
printf("                    Multiplication table of 8   \n");
while(i<=10){
	printf("%d x %d = %d \n",eight,i,eight*i);
	sum+=eight*i;
	i++;
}
printf("\n");
printf("Sum of multiplication factors of 8 is %d \n",sum);
return 0;
}

