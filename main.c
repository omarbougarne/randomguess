#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numberToGuess, userGuess;
    srand(time(0));
    numberToGuess = rand() % 100 + 1;

    do {
        printf("Guess a number between 1 and 100: ");
        scanf("%d", &userGuess);

        if (userGuess < numberToGuess)
            printf("Try a higher number.\n");
        else if (userGuess > numberToGuess)
            printf("Try a lower number.\n");
        else
            printf("Congratulations! You guessed the number.\n");

    } while (userGuess != numberToGuess);

    return 0;
}
