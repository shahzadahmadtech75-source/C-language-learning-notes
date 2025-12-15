#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h>
typedef struct {
    int id;
    int progress;
    int step;
} Task;
int max_tasks = 0;
int speed = 5;
#define bar_length 80
void print_bar(Task task);
void clr_scrn();
 
int main(){
    int choice;
    int choose;
    printf("\nDownload Movie: ");
    printf("\n1. Yes ");
    printf("\n2. No");
    printf("\nSelect: ");
    scanf("%d", &choose);
    if(choose == 1){
        printf("\nChoose Internet Speed: ");
    printf("\n1. 10mb/s");
    printf("\n2. 5mb/s (default): ");
    scanf("%d", &choice);
    if(choice == 1){
        speed = 10;
    }else{
        speed = 5;
    }
    int mov;
    printf("\nHow many movies you want to download: ");
    scanf("%d", &mov);
    max_tasks = mov;
    Task tasks[max_tasks];
    srand(time(NULL));
     
    for(int i = 0; i < max_tasks;i++){
        tasks[i].id = i + 1;
        tasks[i].progress = 0;
        tasks[i].step = rand() % speed + 1;
    }
    int incomplete = 1;
    printf("\n                    Downloading start\n");
    while(incomplete){
        incomplete = 0;
        clr_scrn();
        for(int i = 0; i < max_tasks;i++){
            tasks[i].progress += tasks[i].step;
            if(tasks[i].progress > 100){
                tasks[i].progress = 100;
            }else if(tasks[i].progress < 100){
                incomplete = 1;
            }
            print_bar(tasks[i]);
            printf("\n");
        }
        sleep(1);
    }
    printf("\nAll movies downloaded!");
    }else{
        int ch;
        printf("\nEnter 11 to exit: ");
        scanf("%d", &ch);
        if(ch == 11){
            return 0;
        }else{
            printf("\nCannot reach server!");
            printf("\nRestart and open the app again!");
        }
    }
    
    return 0;
}

void print_bar(Task task){
    int showbar = (task.progress * bar_length) / 100;
   
    printf("Movie %d: [",task.id);
    for(int i = 0; i < bar_length;i++){
        if(i < showbar){
            printf("=");
        }else{
            printf(" ");
        }
    }printf("] %d%%",task.progress);
}

void clr_scrn(){
    #ifdef _WIN32
    system("cls");
    #else
    system("clear");
    #endif
}