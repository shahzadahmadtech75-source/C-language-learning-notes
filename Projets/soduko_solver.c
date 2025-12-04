#include <stdio.h>

void print_puzzle(int puzzle[9][9]);
int valid_puzzle(int puzzle[9][9], int row, int col, int val);
int solve_puzzle(int puzzle[9][9], int row, int col);

int main() {
    int puzzle[9][9] = {
        {3,0,0,0,2,0,0,7,0},
        {9,0,0,5,0,0,0,1,4},
        {0,1,6,3,7,0,0,0,8},
        {2,0,0,8,0,0,0,0,1},
        {5,0,0,0,4,1,8,0,0},
        {0,8,0,0,0,0,0,5,0},
        {0,0,5,0,1,0,2,8,0},
        {0,4,0,0,0,6,0,9,3},
        {7,3,1,0,8,2,0,0,0},
    };

    printf("\n\tWelcome To SUDOKU Solver!!\n");
    printf("Original Puzzle:\n");
    print_puzzle(puzzle);

    if (solve_puzzle(puzzle, 0, 0)) {
        printf("\nThe puzzle is solved!\n");
        print_puzzle(puzzle);
    } else {
        printf("This puzzle is not solvable!\n");
    }

    return 0;
}

// show puzzle
void print_puzzle(int puzzle[9][9]) {
    printf("\n+-------+-------+-------+");
    for (int row = 0; row < 9; row++) {
        printf("\n| ");
        for (int col = 0; col < 9; col++) {
            if (puzzle[row][col] != 0)
                printf("%d ", puzzle[row][col]);
            else
                printf("  ");

            if ((col + 1) % 3 == 0)
                printf("| ");
        }
        if ((row + 1) % 3 == 0)
            printf("\n+-------+-------+-------+");
    }
}

// valid check
int valid_puzzle(int puzzle[9][9], int row, int col, int val) {
    // row check
    for (int i = 0; i < 9; i++)
        if (puzzle[row][i] == val)
            return 0;

    // col check
    for (int i = 0; i < 9; i++)
        if (puzzle[i][col] == val)
            return 0;

    // 3×3 box check
    int r = row - row % 3;
    int c = col - col % 3;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (puzzle[r + i][c + j] == val)
                return 0;

    return 1;
}

// solve puzzle
int solve_puzzle(int puzzle[9][9], int row, int col) {
    if (col == 9) {
        row++;
        col = 0;
    }
    if (row == 9)
        return 1; // solved

    if (puzzle[row][col] != 0)
        return solve_puzzle(puzzle, row, col + 1);

    for (int val = 1; val <= 9; val++) {
        if (valid_puzzle(puzzle, row, col, val)) {
            puzzle[row][col] = val;

            if (solve_puzzle(puzzle, row, col + 1))
                return 1;

            puzzle[row][col] = 0; // backtrack
        }
    }

    return 0;
}
