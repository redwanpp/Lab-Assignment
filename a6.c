#include <stdio.h>

int main() {
    int c, d, temp;

    printf("Enter C: ");
    scanf("%d", &c);
    printf("Enter d: ");
    scanf("%d", &d);

    printf("\nBefore Intercharge\n");
    printf("C is: %d\n", c);
    printf("D is: %d\n", d);

    temp = c;
    c = d;
    d = temp;

    printf("\nAfter Intercharge\n");
    printf("C is: %d\n", c);
    printf("D is: %d\n", d);

    return 0;
}