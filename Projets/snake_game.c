#include<stdio.h>
 #include<stdlib.h>
 #include<conio.h>
 #include <windows.h>
 #include <time.h>

 int tail_x[100];
 int tail_y[100];
 int tail_length = 0;
 int score = 0;
 int head_x =10,head_y = 10,fruit_x = 15,fruit_y = 15;
 #define HEIGHT 20
 #define WIDTH 60
enum Direction{
    UP,
    DOWN,
    RIGHT,
    LEFT,
    STOP
 };
 enum Direction dir;

DWORD old_mode;
HANDLE hStdin;


 //clear_screen
 void clear_screen();
 //drawing screen
 void draw();
 //masking
void set_terminal();

void reset_terminal();
//setupp
void setup();
//input available
int input_available();
//game play
void game_play();
//input
void input();

///////////////////////////////////////////
int main(){
    srand(time(NULL));
    set_terminal();
    setup();
    while(1){
        draw();
        input();
        game_play();
        int sleep_time = 800 / (score != 0? score : 10) ;
        Sleep(sleep_time);
    }
    
    return 0;
}
/////////////////////////////////////////////////////
//clear screen
void clear_screen(){
    #ifdef _WIN32
    system("cls");
    #else
    system("clear");
    #endif
}
//reset_terminal
void reset_terminal() {
    SetConsoleMode(hStdin, old_mode);
}
//set_termminal

void set_terminal() {
    hStdin = GetStdHandle(STD_INPUT_HANDLE);
    GetConsoleMode(hStdin, &old_mode);

    atexit(reset_terminal);

    DWORD new_mode = old_mode;

    // Disable line input (ICANON equivalent)
    new_mode &= ~(ENABLE_LINE_INPUT);

    // Disable echo (ECHO equivalent)
    new_mode &= ~(ENABLE_ECHO_INPUT);

    SetConsoleMode(hStdin, new_mode);
}
//draw on screen
void draw(){
    clear_screen();
    printf("\t\tWelcome To the Snake Game");
    printf("\n");
    for(int i = 0; i < WIDTH + 2;i++){
        printf("#");
    }
    for(int i = 0; i < HEIGHT;i++){
        printf("\n#");
        for(int j = 0; j < WIDTH;j++){
            if (i == head_y && j == head_x){
                printf("O");
                
            }else if(i == fruit_y && j == fruit_x){
                printf("F");

            }else{
                int tail_found = 0;
                for(int k = 0;k< tail_length;k++){
                    if(tail_x[k] == j && tail_y[k] == i){
                        printf("o");
                        tail_found = 1;
                        break;
                    }
                }
                if(!tail_found){
                    printf(" ");
                }
            }
        }
        printf("#");
    }
    printf("\n");
    for(int i = 0; i < WIDTH+2;i++){
        printf("#");
    }
    printf("\nScore: %d\n",score);



}
//setup
void setup(){
    head_x = WIDTH / 2;
    head_y = HEIGHT / 2;
    fruit_x = rand() % WIDTH;
    fruit_y = rand() % HEIGHT;
    dir = STOP;


}
//input available
 // for _kbhit()

int input_available() {
    // _kbhit() returns non-zero if a key is pressed, 0 otherwise
    return _kbhit();
}
//gameloop
void game_play(){
    int x = head_x , y = head_y;
    for(int i = tail_length; i > 0 ;i--){
        tail_x[i] = tail_x[i - 1];
        tail_y[i] = tail_y[i - 1];
    }
    tail_x[0] = head_x;
    tail_y[0] = head_y;




    switch (dir) {
      case UP:
        head_y--;
        break;
    
      case DOWN:
      head_y++;
        break;
    
      case LEFT:
      head_x--;
        break;
    
    
      case RIGHT:
      head_x++;
        break;
    
      case STOP:
        break;
    
    
    }
    if(head_x < 0){
        head_x = WIDTH - 1;
    }else if(head_x >= WIDTH){
        head_x = 0;
    }

    if(head_y < 0){
        head_y = HEIGHT - 1;
    }else if(head_y >= HEIGHT){
        head_y = 0;
    }
    for(int i = 0; i < tail_length;i++){
        if(tail_x[i] == head_x && tail_y[i] == head_y){
            printf("\nAh! You hit your tail. GAME OVER!!");
            exit(0);
        }
    }

    if(head_x == fruit_x && head_y == fruit_y){
        score += 10;
        tail_length++;
        fruit_x = rand() % WIDTH;
        fruit_y = rand() % HEIGHT;
    }
}

//input
void input(){
    if(input_available()){
    char ch = _getch();
    switch (ch) {
      case 'a':
        dir = LEFT;
        break;
    
      case 's':
      dir = DOWN;
        break;
    
      case 'w':
      dir = UP;
        break;
      case 'd':
      dir = RIGHT;
        break;
    
      case 'x':
      dir = STOP;
        break;
    }
    }    
}