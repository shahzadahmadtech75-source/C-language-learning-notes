// FUnction tasks

#include<stdio.h>
// 1:Greatest number checker
int gn_checker(int a ,int b);

// 2: Even odd checker
int checker(int f);

int main(){
int n1;
int n2;
printf("Enter a number: \n");
scanf("%d",&n1 );
printf("Enter a number: \n");
scanf("%d",&n2 );
if( n1 == n2){
	printf("Both numbers are equal,\n");
}else{
	int c = gn_checker(n1,n2);
printf("%d is greater number.\n",c);

}
int num;
printf("Enter a number: \n");
scanf("%d", &num);
int d = checker(num);
if (d == 1){
	printf("%d is an even number .\n",num);
	
}else{
	printf("%d is an odd number .\n",num);
}



return 0;
}
// 1
int gn_checker(int a,int b){
	int result;
	if (a>b){
		result = a;
		
	}
	else{
		result = b;
	}
}

// 2
int checker(int f){
	
	if(f%2 == 0){
	    return 1;
	}else{
		return 0;
	}
}
