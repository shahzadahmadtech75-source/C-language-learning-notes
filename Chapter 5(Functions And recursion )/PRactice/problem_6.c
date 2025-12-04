#include<stdio.h>
void pattern();
int main(){
    int user;
    printf("Enter a number\n");
    scanf("%d", &user);
    pattern(user);
    return 0;
}
void pattern(int x){
    for (int i = 1;i<=x;i++){
        for (int j = 1;j<=i;j++){
            printf("*",j);
        }
        printf("\n");
    }
}