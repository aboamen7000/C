#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Number Guessing Game

int main(){

        // seed the random number generator with current time
        srand(time(NULL));

        // generate a random number between 1 and 100
        int Generator = rand() % 100 + 1;

        // keep track of the number of guesses
        int number_of_try = 0;

        while(1){

        // ask the user to guess the number
        printf("Guess a number between 1 and 100: ");
        int guess;
        scanf("%d", &guess);

        // increment the number of guesses
        number_of_try++;

        // check if the guess is correct
        if ( guess == Generator ) {
                printf("Congratulations, you guessed the number in %d guesses!\n", number_of_try);
                break;
        }else if ( guess < Generator ) {
                printf("Too low, Try again.\n");
        } else if ( guess > Generator ) {
                printf("Too high, Try again.\n");
        }

        } // while loop
       

        return 0;
}