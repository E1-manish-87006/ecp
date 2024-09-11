/***16. Write a program to develop a very simple version of the ''guess the magic number" game. The
program generates a random magic number between 1 and 1000. Ask user to guess the
number. If guess is correct then print message “congrats! You won.” if the guess is less than
magic number print the message ** left ** otherwise print the message ** right **. Repeat the
procedure till player give accurate guess. Give maximum 10 chances to user.
Note: generates the magic number using the standard random number generator rand( ), which
returns an arbitrary number between 0 and RAND_MAX (which defines an integer value that
is 32,767 or larger). The rand( ) function requires the header <stdlib.h>.***/
#include <stdio.h>
#include <stdlib.h>


int main() {
   
    int magicNumber = rand() % 1000 + 1;
    int guess, chances = 10;

    do {
        printf("Guess the number (1-1000): ");
        scanf("%d", &guess);

        if (guess == magicNumber) {
            printf("You won!\n");
        } else if (guess < magicNumber) {
            printf("Too low!\n");
        } else {
            printf("Too high!\n");
        }

        chances--;
        printf("Chances left: %d\n", chances);
    } while (guess != magicNumber && chances > 0);

    if (chances == 0) {
        printf("Game over! Number was %d.\n", magicNumber);
    }

    return 0;
}
