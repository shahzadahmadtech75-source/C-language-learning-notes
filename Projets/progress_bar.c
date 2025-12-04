#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>
typedef struct  {
    int id;
    int progress;
    int step;
}Task;

const int max_tasks = 10;
#define bar_length 50
void print_bar(Task task);
void clearscrn();
//---------------------------------
int main(){
    Task tasks[max_tasks];
    srand(time(NULL));
    for(int i = 0; i < max_tasks;i++){
        tasks[i].id = i+1;
        tasks[i].progress = 0;
        tasks[i].step = rand() % 5 + 1;
    }
    int incomplete = 1;
    while(incomplete){
        incomplete = 0;
        clearscrn();
        for(int i = 0; i < max_tasks;i++){
              tasks[i].progress += tasks[i].step;
              if (tasks[i].progress > 100){
                tasks[i].progress = 100;
              }else if (tasks[i].progress < 100){
                incomplete = 1;
              }
              print_bar(tasks[i]);
        }
        sleep(1);
    }
    printf("All Tasks Completed !.\n");

    return 0;
}
void print_bar(Task task){
    int showing_bars = (task.progress * bar_length)/100;
    printf("Task %d: [",task.id);
    for(int i = 0; i < bar_length;i++){
        if(i<showing_bars){
            printf("=");
        }else{
            printf(" ");
        }
    }
    printf("] %d%%\n",task.progress);
}
void clearscrn(){
    #ifdef _WIN32
    system("cls");
    #else
    system("clear");
    #endif
}