#include<stdio.h>

int main(){
	
	int user;
	int primechecker = 1;
	
	printf("Enter a number \n");
	scanf("%d",&user);
	
	if (user<=1){
		printf("This is not a prime number \n");
		return 0;}
		
	for(int i = 2;i<=user/2;i++){
			if(user%i==0){
			primechecker = 0;
			break;
		}
	
}
	if (primechecker == 1){
		printf("This is a prime number \n");
	}else{
		printf("This is a composite number \n");
		
	}

	return 0;
	}
