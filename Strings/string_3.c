#include<stdio.h>
 
int main(){
    // we cant take multi words string as an input using scanf 
    // for this purpose we will use gets and puts 
    char sentence[30];
    puts("Enter a sentence ;");
    gets(sentence);
    puts(sentence);// puts already adds a new line unlike printf
    puts("I am in new line");

    //* gets cause unchecked bounding and causes buffer issues therefore there is another func to take multi strings as input with safe
    fgets(sentence,sizeof(sentence),stdin);
    fputs(sentence,stdout);
    return 0;
}