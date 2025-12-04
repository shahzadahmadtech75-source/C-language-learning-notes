#include<stdio.h>
 int sum(int num);

int main(){
    int user;
    printf("Enter a number \n");
    scanf("%d", &user);
    int result = sum(user);
    printf("The sum is %d\n",result);
    return 0;
}
int sum(int num){
    if(num == 0){
        return 0;
    }
    return num + sum(num - 1);
}