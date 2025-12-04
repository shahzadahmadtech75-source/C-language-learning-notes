#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int main(){
	
	char player_1[10];
	char roll;
	int min = 0;
	int max = 6;
	int player_1_score = 0;
	
	srand(time(NULL));

	printf("******************************************Welcome to Dice Cricket Match****************************************");
	printf(" \n");
	
	printf(" \n");
	printf("Enter player 1 name: \n");
	scanf("%s",&player_1);
	printf("Press r to roll the Dice\n");
	while(1){
		
		scanf(" %c",&roll);
		int random = min + rand() % (max - min + 1);
		
		if(roll!='r'){
			printf("Game Over!!!!\n");
			break;
		}
		if (random != 0){
			printf("%s you hit %d\n",player_1,random);
			player_1_score +=random; 
			
		}else{
			printf("%s you are out\n",player_1);
			player_1_score +=random;
			break;
		}
	}
printf("%s total score is %d\n",player_1,player_1_score);

printf("****************************************** Now Its opponent turn ****************************************");
	
char player_2[10];
	char roll_2;
	int min_2 = 0;
	int max_2 = 6;
	int player_2_score = 0;
	
	srand(time(NULL));

	printf(" \n");
	
	printf(" \n");
	printf("Enter player 2 name: \n");
	scanf("%s",&player_2);
	printf("Press \"r\" to roll the Dice \n");
	while(1){
		
		scanf(" %c",&roll_2);
		int random_2 = min_2 + rand() % (max_2 - min_2 + 1);
		
		if(roll_2!='r'){
			printf("Game Over!!!!\n");
			break;
		}
		if (random_2 != 0){
			printf("%s you hit %d\n",player_2,random_2);
			player_2_score +=random_2; 
			
		}else{
			printf("%s you are out\n",player_2);
			player_2_score +=random_2;
			break;
		}
	}
printf("%s total score is %d\n",player_2,player_2_score);
	printf("************************* Winner ******************************\n");
	if (player_1_score>player_2_score){
		printf("%s won the match by %d runs.\n",player_1,player_1_score - player_2_score);

	}else{
		
		printf("%s won the match by %d runs.\n",player_2,player_2_score - player_1_score);
	}




	return 0;
}
