#include<stdio.h>
 
int main(){
    //* INCREMENT OPERATORS

    int num = 2;
    num = num +5;
    printf("The value of number is %d\n",num); //? Prints 7 
    num++;
    printf("The value of number is %d\n",num); //? Prints 8 
    ++num;
    printf("The value of number is %d\n",num); //? Prints 9 

    //!Then what is the diffeerece betweeen num++ and ++num
    //? IF i print directly;

    printf("The velue here is %d\n",num++); //* Prints 9 then 1 is added
    printf("The value of number after incrementing  is %d\n",num); //? Prints 10 here

    printf("The value here is %d\n",++num); //* 1 is added then  Prints so value is 11 

    //? Similarly DECREMENT OPERATOR

    printf("The value here is %d\n",num--); //* Prints 11 then 1 is subtracted
    printf("The value of number after decrementing is %d\n",num); //? Prints 10 here

    printf("The value here is %d\n",--num); //* 1 is subtracted then  Prints so value is 9
    
    //* COMPOUND OPERATORS
    num+= 1; //? same as num = num = 1
    printf("The value of compound operatoing number is %d\n",num);
    num-= 1; //? same as num = num - 1
    printf("The value of compound operatoing number is %d\n",num);
    num*= 2; //? same as num = num * 2
    printf("The value of compound operatoing number is %d\n",num);
    num/= 3; //? same as num = num / 3
    printf("The value of compound operatoing number is %d\n",num);


    return 0;
}