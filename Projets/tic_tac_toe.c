#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<time.h>
#define BOARD_SIZE 3
#define X 'X'
#define O 'O'


//difficulty const
int difficulty;

//score checking
typedef struct  {
    int playerWon;
    int ComputerWon;
    int Draw;
} Score;

// input level
void input_difficulty();
//clear screen
void clear_scrn();
//print board
void print_board(char board[BOARD_SIZE][BOARD_SIZE]);
//winner_check
int check_win(char board[BOARD_SIZE][BOARD_SIZE],char player);
//draw checker
int check_draw(char board[BOARD_SIZE][BOARD_SIZE]);
// check game
void play_game();
//player move
void player_move(char board[BOARD_SIZE][BOARD_SIZE]);
//computer move
void computer_move(char board[BOARD_SIZE][BOARD_SIZE]);
//is valid move
int is_valid_move(char board[BOARD_SIZE][BOARD_SIZE],int row,int col);
Score score = {0, 0, 0};

//********************************** */
int main(){
    srand(time(NULL));
    int choice;
    input_difficulty();
    do{
        play_game();
        printf("Play Again? (1 for yes, 0 for no:\n");
        scanf("%d", &choice);
    }while(choice == 1);
printf("\nBye Bye Thanks for playing!");

    return 0;
}
//**************************************** */

//input difficulty
void input_difficulty(){
    while (1)
    {
        printf("\nChoose difficulty level: ");
        printf("\n1. Human (Standard)");
        printf("\n2. AI Mode (Impossible to Win)");
        printf("\nEnter your choice: ");
        scanf("%d", &difficulty);

        if (difficulty != 1 && difficulty != 2){
            printf("\nIncorrect Choice! Enter choice (1/2): ");
        } else {
            break;
        }
    }
}

//clear_scrn
void clear_scrn(){
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

//print board
void print_board(char board[BOARD_SIZE][BOARD_SIZE]) {
    clear_scrn();
    printf("\nScore - Player X: %d, Computer: %d, Draws: %d",
           score.playerWon, score.ComputerWon, score.Draw);
    printf("\nTic-Tac-Toe\n");

    for (int i = 0; i < BOARD_SIZE; i++) {

        // Print each row
        for (int j = 0; j < BOARD_SIZE; j++) {
            printf(" %c ", board[i][j]);
            if (j < BOARD_SIZE - 1)
                printf("|");
        }

        printf("\n");  // move to next line after row

        // Print separator between rows (but not after last row)
        if (i < BOARD_SIZE - 1)
            printf("---+---+---\n");
    }
}

//check win
int check_win(char board[BOARD_SIZE][BOARD_SIZE],char player){
    for(int i = 0; i < BOARD_SIZE;i++){
       //checking rows
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player){
            return 1;
        }
        // checking columns
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player){
            return 1;
        }
    }
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) || (board[2][0] == player && board[1][1] == player && board[0][2] == player)){
        return 1;
    }
    return 0;
}
//check draw
int check_draw(char board[BOARD_SIZE][BOARD_SIZE]){
    for(int i = 0; i < BOARD_SIZE;i++){
        for(int j = 0; j < BOARD_SIZE;j++){
            if(board[i][j] == ' '){
                return 0;

            }
        }
    }
    return 1;
}
//play game
void play_game(){
    char board[BOARD_SIZE][BOARD_SIZE] = {{' ', ' ', ' '},
                                          {' ', ' ', ' '},
                                          {' ', ' ', ' '}};

    char current_player = rand() % 2 == 0 ? X : O;
    print_board(board);
    while(1){

    if (current_player == X){
        player_move(board);
        print_board(board);

        if(check_win(board, X)){
            score.playerWon++;
            printf("\nCongratulations! You have Won.");
            break;
        }
        current_player = O;
    }
    else{
        computer_move(board);
        print_board(board);

        if(check_win(board, O)){
            score.ComputerWon++;
            printf("\nComputer won! Try next time..\n");
            break;
        }
        current_player = X;
    }

    if(check_draw(board)){
        score.Draw++;
        print_board(board);
        printf("\nIts a Draw!");
        break;
    }
}
}

//player move 
void player_move(char board[BOARD_SIZE][BOARD_SIZE]){
   int count = 0 , x, y;
    for(int i = 0; i < BOARD_SIZE;i++){
        for(int j = 0; j < BOARD_SIZE;j++){
            if(board[i][j] == ' '){
                count++;
                x = i;
                y = j;
            }
        }
   }
   if(count == 1){
    board[x][y] = X;
    return;
   }
   
   
   
   
   
    int row, col;
    do{
        printf("\nPlayer X turn.");
        printf("\nEnter row and column (1-3) for X: ");
        scanf("%d", &row);
        scanf("%d", &col);
    }while(!is_valid_move(board,row,col));
    row--;
    col--;
    board[row][col] = X;

}
// computer move
void computer_move(char board[BOARD_SIZE][BOARD_SIZE]){

    // 1️⃣ Check if computer can WIN immediately
    for(int i = 0; i < BOARD_SIZE; i++){
        for(int j = 0; j < BOARD_SIZE; j++){
            if (board[i][j] == ' '){
                board[i][j] = O;
                if(check_win(board, O)){
                    return;   // ✅ winning move found
                }
                board[i][j] = ' '; // undo if not winning
            }
        }
    }

    // 2️⃣ Check if player is about to WIN → block him
    for(int i = 0; i < BOARD_SIZE; i++){
        for(int j = 0; j < BOARD_SIZE; j++){
            if (board[i][j] == ' '){
                board[i][j] = X;
                if(check_win(board, X)){
                    board[i][j] = O; // ✅ block player
                    return;
                }
                board[i][j] = ' ';
            }
        }
    }

    // 3️⃣ AI MODE: take center or corners
    if (difficulty == 2){

        // ✅ Take center if free
        if (board[1][1] == ' '){
            board[1][1] = O;
            return;
        }

        // ✅ Take any corner
        int corner[4][2] = {{0,0},{0,2},{2,0},{2,2}};
        for(int i = 0; i < 4; i++){
            if(board[corner[i][0]][corner[i][1]] == ' '){
                board[corner[i][0]][corner[i][1]] = O;
                return;
            }
        }
    }

    // 4️⃣ Otherwise play first available empty cell
    for(int i = 0; i < BOARD_SIZE; i++){
        for(int j = 0; j < BOARD_SIZE; j++){
            if (board[i][j] == ' '){
                board[i][j] = O;
                return;
            }
        }
    }
}

// valid move
int is_valid_move(char board[BOARD_SIZE][BOARD_SIZE], int row, int col) {
    // User enters 1–3, so convert first
    if (row < 1 || row > 3 || col < 1 || col > 3)
        return 0;

    row--;  
    col--;

    return board[row][col] == ' ';
}
