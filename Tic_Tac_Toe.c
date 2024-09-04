#include <stdio.h>

int main()
{
    char board[3][3] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
    int row, col;
    char player = 'X';
    int count = 0;

    printf("Welcome to Tic Tac Toe!\n");

    // game loop
    while (1) {
        printf("Player %c, enter row (1-3) and column (1-3) separated by a space: ", player);
        scanf("%d %d", &row, &col);

        if (row < 1 || row > 3 || col < 1 || col > 3) {
            printf("Invalid input. Try again.\n");
            continue;
        }

        if (board[row-1][col-1] != ' ') {
            printf("That space is already taken. Try again.\n");
            continue;
        }

        board[row-1][col-1] = player;
        count++;

        // check for win or draw
        if (board[0][0] == player && board[0][1] == player && board[0][2] == player ||
            board[1][0] == player && board[1][1] == player && board[1][2] == player ||
            board[2][0] == player && board[2][1] == player && board[2][2] == player ||
            board[0][0] == player && board[1][0] == player && board[2][0] == player ||
            board[0][1] == player && board[1][1] == player && board[2][1] == player ||
            board[0][2] == player && board[1][2] == player && board[2][2] == player ||
            board[0][0] == player && board[1][1] == player && board[2][2] == player ||
            board[0][2] == player && board[1][1] == player && board[2][0] == player) {
            printf("Player %c wins!\n", player);
            break;
        } else if (count == 9) {
            printf("It's a draw!\n");
            break;
        }

        // switch to other player
        if (player == 'X') {
            player = 'O';
        } else {
            player = 'X';
        }

        // print board
        printf("\n");
        printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
        printf("---+---+---\n");
        printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
        printf("---+---+---\n");
        printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
        printf("\n");
    }

    return 0;
}
