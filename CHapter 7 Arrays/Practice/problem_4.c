#include<stdio.h>
 
int main(){
    int arr[10];
    int user;
    int i = 0;
    printf("Enter a number: ");
    scanf("%d", &user);
    while(i<10){
        arr[i] = user * (i+1);
        printf("%d x %d = %d\n",user,(i+1),arr[i]);
        i++;
    }
    return 0;
}