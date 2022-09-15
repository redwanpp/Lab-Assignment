#include <stdio.h>
#include <math.h>

#define PIE 3.1416

int main() {
    double radius, area, pere;

    printf("Enter radius of circle: ");
    scanf("%lf", &radius);

    area = PIE * pow(radius, 2);
    pere = 2 * PIE * radius;

    printf("Area is : %.2lf\n", area);
    printf("Perimeter is : %.2lf\n", pere);

    return 0;
}