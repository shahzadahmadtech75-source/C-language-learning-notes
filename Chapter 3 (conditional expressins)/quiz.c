#include<stdio.h>
 
int main(){
    
// 90 – 100 => A 
// 80 – 90 => B 
// 70 – 80 => C 
// 60 – 70 => D 
// 50 – 60 => E 
// <50        
// => F
int marks;
printf("Enter your marks: \n");
scanf("%d", &marks);

if (marks >= 90 && marks <= 100){
    printf("You got Grade A\n");
}

else if (marks >= 80 && marks <= 90){
    printf("You got Grade B\n");
}

else if (marks >= 70 && marks <= 80){
    printf("You got Grade C\n");
}

else if (marks >= 60 && marks <= 70){
    printf("You got Grade D\n");
}

else if (marks >= 50 && marks <= 60){
    printf("You got Grade E\n");
}

else if (marks < 50){
    printf("You got Grade F and you are fail.Please Try again\n");
}
else{
    printf("Enter valid marks\n");
}
    return 0;
}