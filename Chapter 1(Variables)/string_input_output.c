#include<stdio.h>

int main(){
char name[15];
puts("Enter your name; ");
fgets(name,sizeof(name),stdin);
//fputs(name,stdout);
puts(name);

return 0;
}

