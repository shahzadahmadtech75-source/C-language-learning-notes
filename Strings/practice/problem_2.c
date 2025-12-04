
#include<stdio.h>
 int length(char str[]){
    int length = 0;
    while(str[length] != '\0'){
        length++;
    }
    return length;
 }
int main(){
    char name[] = "shahzad ahmad";
    printf("Length of your name is %d\n",length(name));
    return 0;
}