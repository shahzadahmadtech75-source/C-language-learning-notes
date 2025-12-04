#include<stdio.h>
 
int main(){
    char abc;
    printf("Enter a character in lower case: \n");
    scanf("%c", &abc);
    if (abc>='a' && abc<='z'){
        printf("This is a lower case character\n");
    }
    else{
        printf("This is not a lower case character\n");
    }

    return 0;
}