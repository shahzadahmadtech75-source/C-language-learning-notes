#include<stdio.h>
 
int main(){
    int three_dimensional[4][3][2];
    for(int i = 0;i<4;i++){
        for(int j = 0;j<3;j++){
            for(int h = 0;h<2;h++){
        printf("%u\n",&three_dimensional[i][j][h]);
    }
    }    
    }
        
    return 0;
}