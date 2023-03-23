#include <stdio.h>
int main(){

    const double diameter = 5.1;
    double radius;
    double circumference;

    double area;


    printf("\nPlease Enter Radius of The Circle : ");
    scanf("%lf", &radius);

    circumference = 2 * diameter * radius;
    area = diameter * radius  * radius;

    printf("\nthe circumference : %lf", circumference);
    printf("\nthe area : %lf", area);

    return 0;
}