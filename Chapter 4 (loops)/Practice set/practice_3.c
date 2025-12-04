#include<stdio.h>
int main(){
	
	int number = 10;
	int sum = 0;
	int i = 1;
	printf("Adding ten natural numbers\n");
	while(i<=number){
		printf("%d + ",i);
		sum+=i;
		i++;
	}
	printf("\n");
	printf("Sum of first ten natural numbers is %d ",sum);
	return 0;
}
