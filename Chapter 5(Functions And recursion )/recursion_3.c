//* Recursion is a process in which the function calls itself again and again to solve a smaller part of a problem
///? Asks a person for help ,he aasks another and so on untill the person who solve the problem
//* Recursion must contain a base case otherwise it runs infinetely

#include<stdio.h>
//1
 int factorial(int x);
 //2
 int sum(int y);
 //3
void numbers(int n);
int main(){
    int user;
    printf("Enter a number \n");
    scanf("%d", &user);
    //1
    int c = factorial(user);
    //2
    int d = sum(user);
    //3
    //* 1
    printf("Factorial of %d is %d\n",user,c);
    //* 2
    printf("Sum of numbers upto %d is %d\n",user,d);
    //* 3
    printf("Numbers from %d to 1 are :\n",user);
    numbers(user);
  

    return 0;
}
//1
int factorial(int x){
    if (x == 0 || x == 1){
        return 1;
    }
    return factorial(x - 1) * x;
}
//2
int sum(int y){
    if (y == 1){
        return 1;
    }
    return sum(y - 1) + y;
}
//3
void numbers(int n){
    if(n == 0){
      return;
    }
   printf("%d\n",n);
    numbers(n - 1);
    
}


