#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int guess, number, tries = 0;
    srand(time(0)); // Seed the random number generator
    number = rand() % 100 + 1; // Generate a random number between 1 and 100
    printf("Guess a number between 1 and 100\n");

    do {
        scanf("%d", &guess);
        tries++;

        if (guess > number) {
            printf("Too high! Try again.\n");
        } else if (guess < number) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d tries.\n", tries);
        }
    } while (guess != number);

    return 0;
}
