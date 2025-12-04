#include<stdio.h>
typedef struct complexNumber {
    int real;
    int i;
} complex;
void display(complex x){
    printf("The value of comlex number is %d + %di\n",x.real,x.i);
}
int main(){
    complex number[5];
    for(int i = 0; i < 5;i++){
        printf("Enter the real part of the complex number\n");
        scanf("%d", &number[i].real);
        printf("Enter the imaginary part of the complex number\n");
        scanf("%d", &number[i].i);
        display(number[i]);
    }
    printf("Bas ka kana zalima sam Mushtaq Saib e\n");
    

    
    return 0;
}