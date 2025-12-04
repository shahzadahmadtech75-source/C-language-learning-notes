#include<stdio.h>
 //Incermenting loop
int main(){
    int num = 0; // always initialize the variable
    while(num < 20){
        printf("Wow:%d\n",num);
        // num = num +1; //OR
        num++; // always update the variable
    }

    //Descrimenting loop

    int cookies = 10;
    while(cookies > 0){
        printf("You eat cookie no: %d\n",cookies);
       cookies = cookies - 1;
    }

    int loop = 200;
    while(loop>0){
        printf("%d\n",loop);
        if (loop == 100){
            printf("This is hundered %d\n",loop);
        }
        loop-=1;
        break;
       
    }
    int number = 0;
    while(number<=20){
        if (number>=10){
            printf("This is : %d\n",number);
        }
        number++;

    }

    
    return 0;
}