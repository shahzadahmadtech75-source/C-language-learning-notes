#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<stdlib.h>

// Function to get current time as string
void get_time(char* buffer,int format) {
    time_t raw_time;
    struct tm *current_time;
    
    time(&raw_time); // <-- Use 'time', not 'get_time'
    current_time = localtime(&raw_time);
    if(format == 1){
           strftime(buffer, 50, "%H:%M:%S ", current_time); // Use 50 or sizeof(time) in main
    }else{

        strftime(buffer, 50, "%I:%M:%S %p", current_time); // Use 50 or sizeof(time) in main
    }
    
}
int input_format(){
    int format;
    printf("\nChoose Time Format:");
    printf("\n1. 24 Hour Format");
    printf("\n2. 12 Hour Format (default)");
    printf("\nMake a choice:(1/2) ");
    scanf("%d", &format);
    return format;
}
void get_date(char* buffer) {
    time_t raw_time;
    struct tm *current_time;
    
    time(&raw_time); // <-- Use 'time', not 'get_time'
    current_time = localtime(&raw_time);
    strftime(buffer, 100, "%a %d/%b/%Y", current_time);
}

void clearscrn(){
    #ifdef _WIN32
    system("cls");
    #else
    system("clear");
    #endif
}
int main() {
    char time[50];
    char date[100];
    int format = input_format();
   while(1){
    get_time(time,format); // Calls your function to fill 'time' with current time
    get_date(date);
    clearscrn();
    printf("Current time: %s\n", time);
    printf("Date: %s\n", date);
    sleep(1);
   }
    return 0;
}
