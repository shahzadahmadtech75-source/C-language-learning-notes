// Quick quiz

#include<stdio.h>
int change(int a){
	a = 100;
}
void good_morning();
void good_afternoon();
void good_night();
int main(){

good_morning();
good_afternoon();
good_night();

int b = 23;
int c = change(b);
printf("The value is not changed and remain as %d\n",c);
return 0;
}
void good_morning(){
	printf("Good Morning\n");
	return;
}
void good_afternoon(){
	printf("Good Afternoon\n");
	return;
}
void good_night(){
	printf("Good Night\n");
	return;
}


