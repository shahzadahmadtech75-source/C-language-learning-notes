#include<stdio.h>
#define pi 3.14 // constant 
//  This program calculates the area of a circle 
int main(){
    printf("welcome to calculate the area of circle; \n");
    // float pi;
    // pi = 3.14;
    float radius;
    printf("Enter Radius of the circle: \n");
    scanf("%f", &radius);
    float area_of_circle = pi*radius*radius;
    printf("The area of the given circle is %.2f\n",area_of_circle);
    printf("Thanks for calculation\n");   
    
   
    // This program will calculate volume of given cylinder
    printf("Welcome to calculate the volume of cylinder; \n");
    float pie;
    pie = 3.145;
    float radios;
    float height;
    printf("Enter Radius of the cylinder: \n");
    scanf("%f", &radios);
    
    printf("Enter height of the cylinder: \n");
    scanf("%f", &height);
    
    float volume_of_cylinder = pie*radios*radios*height;
    printf("The volume of the given cylinder is %.2f\n",volume_of_cylinder);
   
    return 0;
}