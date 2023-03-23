// Format Specifier % : defines and formats a type of data to be displayed

    // %c = character
    // %s = string (array of characters)
    // %f = float
    // %lf = double
    // %d,%i = integer

    // %.1 = decimal precision
    // %1 = minimum field width
    // %- = left align

#include <stdio.h>
int main(){

    float first = 10.00;
    float second = 15.95;
    float third = 18.0;

    // printf("order : %f", first);
    printf("order : %.1f\n", first);
    printf("order : %.2f\n", second);
    printf("order : %.2f\n\n", third);

    printf("order with spaces : %10.2f\n", third);
    printf("order with spaces : %-10.2f", third);
    return 0;
}