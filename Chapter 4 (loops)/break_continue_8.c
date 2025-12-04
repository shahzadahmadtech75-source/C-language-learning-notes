#include<stdio.h>

int main(){
//* Continue: Skips the current iteration and loop continous
int users;
printf("Enter a number: \n");
scanf("%d",&users);
for(int j=0;j<=users;j++){
	if(j==10){
	printf("10 is skipped here. \n");
	continue; //When i becomes 10 condition becomes true and 10 is skipped and loop continues
	

	}
	else if(j==13){
		printf("13 is skipped here. \n");
		continue;
	}
	
	else if(j==19){
		printf("19 is skipped here. \n");
		continue;
	}
	
	printf("%d\n",j);
}


//* Break: Exits the loop compeletely when condition is true
int user;
printf("Enter a number: \n");
scanf("%d",&user);
for(int i=0;i<=user;i++){
	if(i==10){
	break; //When i becomes 10 condition becomes true and loop exits without printing 10
	

	}
	
	printf("%d\n",i);
}
printf("The loop exits here. \n");


return 0;
}

