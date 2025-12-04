#include<stdio.h>
 float force(float m);
int main(){
    float mass;
    printf("Enter mass of the body \n");
    scanf("%f", &mass);
    float force_of_attraction = force(mass);
    printf("Force of attraction on the body of mass %.2f kg is %.2f N\n",mass,force_of_attraction);
    return 0;
}
float force(float m){
    float g = 9.8;
    return g * m;
}