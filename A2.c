#include <stdio.h>

void areaRec(double h, double w);
void pereRec(double h, double w);

int main() {
    double height = 7, width = 5;

    // printf("Enter height and width here: ");
    // scanf("%lf %lf", &height, &width);

    areaRec(height, width);
    pereRec(height, width);

    return 0;
}

void areaRec(double h, double w) {
    printf("AREA IS: %.2lf\n", (h * w));
}

void pereRec(double h, double w) {
    printf("Peremeter is: %.2lf\n", (2 * (h  + w)));
}