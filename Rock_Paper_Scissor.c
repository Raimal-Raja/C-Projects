#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int player, computer, result;

    srand(time(NULL)); // set random seed based on current time

    printf("Welcome to Rock Paper Scissors!\n");
    printf("1 - Rock\n2 - Paper\n3 - Scissors\n");

    printf("Enter your choice (1-3): ");
    scanf("%d", &player);

    computer = rand() % 3 + 1; // generate a random number between 1 and 3

    printf("You chose: %d\n", player);
    printf("Computer chose: %d\n", computer);

    if (player == computer) {
        result = 0; // tie
    } else if (player == 1 && computer == 3 || player == 2 && computer == 1 || player == 3 && computer == 2) {
        result = 1; // player wins
    } else {
        result = -1; // computer wins
    }

    if (result == 0) {
        printf("It's a tie!\n");
    } else if (result == 1) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }

    return 0;
}
