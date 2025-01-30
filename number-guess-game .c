// You can copy no worries!!!

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 

int main() {
    int secret, guess, attempts = 0;

    srand(time(0));  
    secret = rand() % 100 + 1;  

    printf("Guess the number (1-100):\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secret) {
            printf("Too high! Try again.\n");
        } else if (guess < secret) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed it in %d attempts.\n", attempts);
        }
    } while (guess != secret);

    return 0;
}
