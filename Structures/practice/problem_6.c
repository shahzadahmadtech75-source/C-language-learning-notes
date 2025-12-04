#include<stdio.h>
 typedef struct date {
    int dd;
    int mm;
    int yyyy;
 }birthday;
 int compare(birthday d1 ,birthday d2){
    if (d1.dd == d2.dd && d1.mm == d2.mm && d1.yyyy == d2.yyyy){
        return 0;
    }
    if(d1.yyyy > d2.yyyy){
        return 1;
    }
    else if(d1.mm > d2.mm){
        return 1;
    }
    else if(d1.dd > d2.dd){
        return 1;
    }
    else if(d1.yyyy < d2.yyyy){
        return -1;
    }
    else if(d1.mm < d2.mm){
        return -1;
    }
    else if(d1.dd < d2.dd){
        return -1;
    }
 }
int main(){
    birthday birth1 = {12,2,2007};
    birthday birth2 = {12,2,2004};
    printf("%d",compare(birth1,birth2));
    return 0;
}