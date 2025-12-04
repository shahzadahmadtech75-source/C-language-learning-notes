#include<stdio.h>
 
int main(){
    char name[7];
    scanf("%s", name);
    printf("%s\n",name);
    for(int i = 0;i<5;i++){
        scanf(" %c", &name[i]);
        

    }name[7] = '\0';
    printf("%s\n",name);
    return 0;
}