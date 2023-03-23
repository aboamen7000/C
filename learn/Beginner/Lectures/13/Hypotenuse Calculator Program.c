#include <stdio.h>
#include <math.h> // sqrt : square root
int main(){

    double a;
    double b;
    double c;

    printf("\nPlease Enter A side : ");
    scanf("%lf", &a);

    printf("\nPlease Enter B side : ");
    scanf("%lf", &b);

    c = sqrt(a*a + b*b);

    printf("\nside c : %lf", c);

    return 0;
}