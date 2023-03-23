#include <stdio.h>
#include <math.h>
int main(){

    double a = sqrt(9);              // 9^ = 3* 3 * 3
    double b = pow(2, 4);            // (double x, double y) =  x^  = 4 * 2
    double c = round(2.16);          // 2
    double d = ceil(2.16);           // 3

    double e = floor(3.99);          // 3
    double f = fabs(-88);            // 88
    double g = log(55);              // 4.007333
    
    double h = sin(10);            // -0.544021
    double m = cos(10);            // -0.839072
    double n = tan(10);            //  0.648361

    printf("The result is : %lf", f);
    return 0;
}