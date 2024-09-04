#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Function prototypes for the games
void playGuessNumberGame();
void playTicTacToe();
void playPaperScissorGame();
void openChatBot();


int main() {
    int choice;

    do {
        printf("\n\n\n\n\t\t\t\t\t-------------------------\n");
        printf("\t\t\t\t\t|=== Main Menu === \t|\n");
        printf("\t\t\t\t\t|1. Guess-Number-Game\t|\n");
        printf("\t\t\t\t\t|2. Tic-Tac-Toe\t\t|\n");
        printf("\t\t\t\t\t|3. Paper-Scissor-Game  |\n");
        printf("\t\t\t\t\t|4. Open Chatbot\t|\n");
        printf("\t\t\t\t\t|5. Exit\t\t|\n");
        printf("\t\t\t\t\t|Enter your choice:\t|\n\t\t\t\t\t");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                playGuessNumberGame();
                break;
            case 2:
                playTicTacToe();
                break;
            case 3:
                playPaperScissorGame();
                break;
            case 4:
                openChatBot();
                break;
            case 5:
                printf("\n\n\t\t\t\t\tExiting...\n");
                system("cls");
                break;
            default:
                printf("\t\t\t\t\tInvalid choice. Please select a valid option.\n");
        }
    } while (choice != 4);

    return 0;
}

void playGuessNumberGame() {
    int guess, number, tries = 0;
    printf("\n\n\n\n\t\t\t\t== Welcome to the Number Guessing Game ==\n");
    srand(time(0)); // Seed the random number generator
    number = rand() % 100 + 1; // Generate a random number between 1 and 100
    printf("\t\t\t\t\tGuess a number between 1 and 100\n");

    do {
        scanf("%d", &guess);
        tries++;

        if (guess > number) {
            printf("\t\t\t\t\tToo high! Try again.\n");
        } else if (guess < number) {
            printf("\t\t\t\t\tToo low! Try again.\n");
        } else {
            printf("\t\t\t\t\tCongratulations! You guessed the number in %d tries.\n", tries);
        }
    } while (guess != number);
    printf("\t\t\t\t\tPlaying Number Guessing Game...\n");
}

void playTicTacToe() {
    char board[3][3] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
    int row, col;
    char player = 'R';
    int count = 0;

    printf("\n\n\n\n\t\t\t\t\t== Welcome to Tic Tac Toe! ==\n");

    // game loop
    while (1) {
        printf("\t\t\t\t\tPlayer %c, enter row (1-3) and column (1-3) separated by a space: ", player);
        scanf("\t\t\t\t\t%d %d", &row, &col);

        if (row < 1 || row > 3 || col < 1 || col > 3) {
            printf("\t\t\t\t\tInvalid input. Try again.\n");
            continue;
        }

        if (board[row-1][col-1] != ' ') {
            printf("\t\t\t\t\tThat space is already taken. Try again.\n");
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
            printf("\t\t\t\t\tPlayer %c wins!\n", player);
            break;
        } else if (count == 9) {
            printf("\t\t\t\t\tIt's a draw!\n");
            break;
        }

        // switch to other player
        if (player == 'R') {
            player = 'T';
        } else {
            player = 'R';
        }

        // print board
        printf("\n");
        printf("\t\t\t\t\t %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
        printf("\t\t\t\t\t---+---+---\n");
        printf("\t\t\t\t\t %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
        printf("\t\t\t\t\t---+---+---\n");
        printf("\t\t\t\t\t %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
        printf("\n");
    }

    printf("\t\t\t\t\tPlaying Tic-Tac-Toe...\n");
}

void playPaperScissorGame() {
int player, computer, result;
    srand(time(NULL)); // set random seed based on current time

    printf("\n\n\n\n\t\t\t\t== Welcome to Rock Paper Scissors! ==\n");
    printf("\t\t\t\t\t1 - Rock\n\t\t\t\t\t2 - Paper\n\t\t\t\t\t3 - Scissors\n");

    printf("\t\t\t\t\tEnter your choice (1-3): ");
    scanf("%d", &player);

    computer = rand() % 3 + 1; // generate a random number between 1 and 3

    printf("\t\t\t\t\tYou chose: %d\n", player);
    printf("\t\t\t\t\tComputer chose: %d\n", computer);

    if (player == computer) {
        result = 0; // tie
    } 
    else if (player == 1 && computer == 3 || player == 2 && computer == 1 || player == 3 && computer == 2) {
        result = 1; // player wins
    } else {
        result = -1; // computer wins
    }

    if (result == 0) {
        printf("\t\t\t\t\tIt's a tie!\n");
    } else if (result == 1) {
        printf("\t\t\t\t\tYou win!\n");
    } else {
        printf("\t\t\t\t\tComputer wins!\n");
    }
    printf("\t\t\t\t\tPlaying Rock Paper Scissors...\n");
}

void openChatBot(){
    char user_input[500];
    system("cls");
    printf("\n\n\t\t\t********WELCOME TO THY_PROFESSORS********\n");

    while (1)
    {
        printf("\n\t\t\t\t\tUser ==>");
        gets(user_input);

        if (strcmp(user_input, "return back to main function") == 0 || strcmp(user_input,"return back to main menu") ==0)
        {
            printf("\t\t\t\t\tbot==> Okay sir\n");
            system("start Main_Menu_Project");
            break;
        }
        else if (strcmp(user_input, "open chrome") == 0)
        {
            printf("\t\t\t\t\tOkay Sir, opening chrome browser \n");
            system("start chrome");
        }
        else if (strcmp(user_input, "open file explorer") == 0)
        {
            printf("\t\t\t\t\tOkay Sir, opening file explorer \n");
            system("start window file explorer");
        }
        else if (strcmp(user_input, "open notepad") == 0)
        {
            printf("\t\t\t\t\tOkay Sir, opening notepad editor \n");
            system("start notepad");
        }
        else if (strcmp(user_input, "open cmd") == 0)
        {
            printf("\t\t\t\t\tOkay Sir, opening cmd command prompt \n");
            system("start cmd");
        }
        else if (strcmp(user_input, "open tic tac toe") == 0)
        {
            printf("\t\t\t\t\tOkay Sir, opening Tic Tac Toe Game \n");
            system("start Tic_Tac_Toe.exe");
        }
        else if (strcmp(user_input, "open rock paper scissor") == 0)
        {
            printf("\t\t\t\t\tOkay Sir, opening rock paper scissor game  \n");
            system("start Rock_Paper_scissor.exe");
        }
        else if (strcmp(user_input, "open number guessing game ") == 0)
        {
            printf("\t\t\t\t\tOkay Sir, opening number guessing game  \n");
            system("start Guess_number.exe");
        }
        else if (strcmp(user_input, "open cyber management system") == 0)
        {
            printf("\t\t\t\t\tOkay Sir, opening cyber management system\n");
            system("start cyber_management.exe");
        }
        else if (strcmp(user_input, "open youtube") == 0)
        {
            printf("\t\t\t\t\tOkay Sir, opening youtube\n");
            system("start https://www.youtube.com");
        }
        else if (strcmp(user_input, "time") == 0)
        {
            time_t s = time(NULL);
            struct tm *current_time = localtime(&s);
            printf("\t\t\t\t\tbot==> %02d:%02d:%02d\n", current_time->tm_hour, current_time->tm_min, current_time->tm_sec);
        }

        if (strcmp(user_input, "hi") == 0 || strcmp(user_input,"hello") == 0)
        {
            printf("\n\t\t\t\t\tHi Sir, this is  Professor your Peronal chatbhot\n");
        }
        else if (strcmp(user_input,"how are you") ==0 || strcmp(user_input,"how are you doing") ==0)
        {
            printf("\n\t\t\t\t\tI am doing well, thank you for asking! I am excited to be able to help people with their tasks and answer their questions. I am still under development, but I am learning new things every day. How are you doing today?\n");
        }
        else if (strcmp(user_input, "what can you do") == 0 || strcmp(user_input,"what you can do") ==0)
        {
            printf("\n\t\t\t\t\tI can have little conversation with you, and can run selected programs for you\n");
        }
        else if (strcmp(user_input, "what is your name") == 0 || strcmp(user_input,"what people call you") == 0)
        {
            printf("\n\t\t\t\t\tThis is Thy Professor, you AI assistant, I am here to facilate you with latest information. \n\t\t");
        }
        else if (strcmp(user_input, "who is your creator") == 0 || strcmp(user_input, "who programmed you") == 0)
        {
            printf("\n\t\t\t\t\tRaimal Raja and Talha Arain have collectively programed me to facilate you with latest informations\n");
        }
        else if (strcmp(user_input, "where is your home") == 0 || strcmp(user_input, "where do you live") == 0)
        {
            printf("\n\t\t\t\t\tI am AI module so i don't have any physical Home I live in your Computer\n");
        }
        else if (strcmp(user_input, "do you have feeling") == 0 || strcmp(user_input,"can you feel") ==0)
        {
            printf("\n\t\t\t\t\tNo! as a AI module i don't have feelings, but my creator may have feelings\n");
        }
        // else
        // {
        //     printf("\n\t\tI'm sorry, I didn't understand your question.\n");
        // }
    }
}