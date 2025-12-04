#include<stdio.h>

int main(){
	
	int user;
	int primechecker = 1;
	
	printf("Enter a number \n");
	scanf("%d",&user);
	int i = 2;
	if (user<=1){
		printf("This is not a prime number \n");
		return 0;
}
	do{
		if(user%i==0){
			primechecker = 0;
			break;
		}
	
		i++;
	}while(i<=user/2);
	if (primechecker == 1){
		printf("This is a prime number \n");
	}else{
		printf("This is a composite number \n");
		
	}
	
	return 0;
	
}
