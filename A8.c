#include <stdio.h>

int main() {
    double f, c;

    printf("Enter temperature in fahrenheit: ");
    scanf("%lf", &f);

    c = ((f - 32) * 5) / 9;

    printf("The temperature in celcious is: %.2lf\n", c);
    
    return 0;
}