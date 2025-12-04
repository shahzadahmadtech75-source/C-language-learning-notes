#include<stdio.h>
// Star patterns 
/* 1:****
    *****
    *****
    *****/
int main(){
int i;
int j;
for (i = 1;i<=5;i++){
	for (j = 1;j<=5;j++){
		printf("*",j);
	}
	printf("\n");
}

// Triangle
printf("\n");
printf("\n");
int a;
int b;
for (a = 1;a<=6;a++){
	for (b = 1;b<=a;b++){
		printf("*",b);
	}
	printf("\n");
}


printf("\n");
printf("\n");
// Inverted Trangle
int c;
int d;
for (c = 1;c<=6;c++){
	for (d = 6;d>=c;d--){
		printf("*",d);
	}
	
	printf("\n");
}


return 0;
}

