#include<stdio.h>

int main(){
int secret = 60;
int won = 0;
int user;
int chances = 1;
printf("Guess the secret number between 10 and 100\n");

while (chances<=10){
printf("Attempt %d:\n",chances);
scanf("%d",&user);
if (user == secret){
printf("Congraatulations :You guess the secret number\n");
won = 1;
break;
}
else{
	printf("\n");
	printf("Guess again\n");
}
chances = chances + 1;	
}
if(!won){
	printf("Game Over:The secret number was %d\n",secret);
}


return 0;
}

