// Data Type 
#include <stdio.h>

    // Basic types                  Size (bytes)                            Format Specifier
    // ===========================|=======================================|=================|
    // int	                        at least 2, usually 4	                %d, %i
    // char	                        1	                                    %c
    // float	                    4	                                    %f
    // double	                    8	                                    %lf
    // short int	                2 usually	                            %hd
    // unsigned int	                at least 2, usually 4	                %u
    // long int	                    at least 4, usually 8	                %ld, %li
    // long long int	            at least 8	                            %lld, %lli
    // unsigned long int	        at least 4	                            %lu
    // unsigned long long int	    at least 8	                            %llu
    // signed char	                1	                                    %c
    // unsigned char	            1	                                    %c
    // long double	                at least 10, usually 12 or 16	        %Lf
    // ===========================|=======================================|=================|

    // Unsigned int :  data type that can store the data values 
    //                 from zero to positive numbers

    // using %lu : Unsigned int or unsigned long

int main(){
    
    // Examples : 1
    // printf("%lu\n", sizeof(char));
    // printf("%lu\n", sizeof(int));
    // printf("%lu\n", sizeof(float));
    // printf("%lu", sizeof(double));


    // Examples : 2
    // int age = 18;

    // %d specifies the type of variable as decimal 
    // %i specifies the type as integer.
    // printf("my Age : %i", age);
    // printf("\n");
    // printf("my Age : %d", age);


    // double height = 180.0;
    // double weight = 85.7f;

    // %f specifies the type of variable as float 
    // %lf specifies the type of variable as double.
    // %(.2)f/lf get only 2 numbers after partition decimal number

    // printf("my Height : %f", height);
    // printf("\n");
    // printf("my Height : %.0f", height);
    // printf("\n");
    // printf("my Height : %.6lf", height);

    // printf("\n");
    // printf("my Weight : %f", weight);
    // printf("\n");
    // printf("my Weight : %.1f", weight);

    // float number = 6.66;

    // printf("\n");
    // printf("the number : %lf", number);
    // printf("\n");
    // printf("the number : %.1lf", number);

    // char charactar = 'A'; // single character %c
    // char charactars[] = "ABCD"; // array of characters %s

    // printf("\n");
    // printf("the Char : %c", charactar);
    // printf("\n");
    // printf("the Char Value : %d", charactar); //ASCII (0-127)
    // printf("\n");
    // printf("mult chara : %s", charactars);
    return 0;
}