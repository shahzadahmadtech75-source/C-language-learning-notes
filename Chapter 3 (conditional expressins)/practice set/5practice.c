#include<stdio.h>
 
int main(){
    
    char character;
    
    printf("Enter a character in lower case: \n");
    scanf("%c", &character);
    
    if(character == 'a'||
    character == 'b'||
character == 'c'||
character == 'd'||
character == 'e'||
character == 'f'||
character == 'g'||
character == 'h'||
character == 'i'||
character == 'j'||
character == 'k'||
character == 'l'||
character == 'm'||
character == 'n'||
character == 'o'||
character == 'p'||
character == 'q'||
character == 'r'||
character == 's'||
character == 't'||
character == 'u'||
character == 'v'||
character == 'x'||
character == 'w'||
character == 'x'||
character == 'y'||
character == 'z'){
    printf("The character is in lower case\n");
}
else{
    printf("The character is not in lower case\n");
}
    return 0;
}