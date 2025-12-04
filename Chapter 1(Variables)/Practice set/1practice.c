#include<stdio.h>
 
int main(){
    
    int length;
    int width;
    // int area;  Here area is returning zero becuse the program executes before inputs 
    // area=length*width;
    printf("Enter Length of the rectangle\n");
    scanf("%d", &length);
    printf("Enter width of the rectangle\n");
    scanf("%d", &width);
    int area;
    area=length*width;
    printf("The area of the given rectangle is %d\n",area);
    return 0;
}