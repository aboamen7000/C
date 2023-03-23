#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// random numbers

int main(){

        // seed the random number generator with current time
        srand(time(NULL));

        // generate 1 random numbers between 1 and 10 :
        // int result = rand() %10 + 1;
        // printf("result : %d\n", result);

        // generate 1 random numbers between 3 and 10 :
        // int result = rand() %4 + 7;
        // printf("result : %d\n", result);

        for (int i = 1; i <= 10; i++)
        {
                // generate 1 random numbers between 3 and 10 :
                int result = rand() %4 + 7;
                printf("result_%i: %d\n", i , result);
                /* code */
        }
        
        return 0;
}