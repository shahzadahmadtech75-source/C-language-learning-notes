#include<stdio.h>
 
int main(){
    
    int english;
    int maths;
    int biology;
    float total = 150.0;
   float percentage;

    printf("***************Every subject is of 50 marks****************\n");
    printf("Enter your English marks: \n");
    scanf("%d", &english);
    
    printf("Enter your Maths marks: \n");
    scanf("%d", &maths);
    
    printf("Enter your Biology marks: \n");
    scanf("%d", &biology);
    percentage = ((english + maths + biology)/total) * 100;

    if (percentage >= 40.0){


        if (english > 33 && maths > 33 && biology > 33){
            printf("All papers are passsed\n");
            printf(" Congratulations! You are passed and your percentage is %f\n",percentage);
            
        }
        else if (english < 33 || maths < 33 || biology < 33){
            printf("some papers are failed\n");
            printf("Sorry you have got failed and your percentage is %f\n",percentage);

        }
        
    }
    else{
        printf("Enter valid marks: \n");
    }
    
    return 0;
}