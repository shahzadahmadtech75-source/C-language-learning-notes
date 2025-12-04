
#include<stdio.h>

int main(){
int odd = 0;
while(odd<=100){
	if (odd%2!=0){
		printf("%d is an odd number \n",odd);
		
	}
	odd= odd+1;
}
printf("Odd numbers: \n");

int odds = -1;
while(odds<=100){
	printf("%d is an odd number \n",odds);
	odds= odds+2;
}
return 0;
}

