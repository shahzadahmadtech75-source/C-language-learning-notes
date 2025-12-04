#include<stdio.h>
// Triangle with spaces 
int main(){
int i;
int space;
int j;
for(i = 1;i<=10;i++){
	for (space= 10-i;space > 0;space--){
		printf(" ");
	
		}
		for(j = 1;j<=i;j++){
		printf("*");
	}
	
	printf("\n");
}

printf("\n");
printf("\n");
// Pyramid 
int a;
int spaces;
int b;
for (a = 1;a<=10;a++){
	for (spaces = 10 - a;spaces > 0;spaces--){
		printf(" ");
		
	   	
	}
	 for (b = 1;b<= 2*a - 1;b++){
	    	
		    printf("*");
	
	}
	
	printf("\n");
}
printf("\n");
printf("\n");
// Inverted Payramid
int row;
int n = 10;
int blank;
int col;
for (row = 1;row<=n;row++){
	for (blank = 1;blank<row - 1;blank++){
		printf(" ");
	}
	for (col = 1;col <= 2*(n - row) + 1;col++){
		printf("*");
	}
	
	printf("\n");
}
return 0;
}

