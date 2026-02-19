#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {

    int randomNumber, guess=0;
    int attempts =0;

    // Generate a random number between 1 and 100
    srand(time(0)); // Seed the random number generator
    randomNumber = (rand() % 100) + 1;
    
    printf("***Welcome to the number guessing game*** \n");
    printf("guess the number between 1 and 100 \n");

    while(guess != randomNumber) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if(guess < randomNumber) {
            printf("Too low! Try again.\n");
        } else if(guess > randomNumber) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
        }
    }
      return 0;
}
