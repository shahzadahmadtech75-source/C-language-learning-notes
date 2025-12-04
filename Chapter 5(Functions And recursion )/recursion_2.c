#include<stdio.h>
//1
 void numbers(int x,int y);
 //2
 void even(int i,int j);
int main(){
    int user;
    printf("Enter a number \n");
    scanf("%d", &user);
    printf("              Numbers from 1 to %d are \n",user);
    numbers(1,user);
    //2
    printf("              Even numbers from 1 to %d are \n",user);
    even(1,user);
    return 0;
}
void numbers(int x,int y){
    if (x > y){
        return;
    }
    printf("%d\n",x);
    numbers(x + 1,y);
}
//2
void even(int i,int j){
    if (i > j){
        return;
    }
    if(i % 2 == 0){
        printf("%d\n",i);
    }
    even(i+1,j);
}