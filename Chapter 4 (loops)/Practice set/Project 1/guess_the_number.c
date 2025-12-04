#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main(){
	int user;
	int min = 10;
	int max = 100;
	int won = 0;
	srand(time(NULL));
	int random = min + rand() % (max - min + 1);
	printf("Guess a number between 10 and 100 \n");
	printf("You have 10 attempts to guess.\n");
	for(int attempt = 1;attempt<=10;attempt++){
		printf("Attempt: %d\n",attempt);
		scanf("%d",&user);
		if (user<10 || user>100){
			printf("Guess a number between 10 and 100.\n");
		}
		else if (user==random){
			printf("Congratulations! You guessed correct  \n");
			printf("You guessed in %d attemps\n",attempt);
			won = 1;
			break;
		}
		else if(user<random){
			printf("Guess a higher value \n");
		}
		else{
			printf("Guess a lower value \n");
			
		}
	}
	if(!won){
		printf("Game Over . The secret number was %d\n",random);
	}
	
	return 0;
}
