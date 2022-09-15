#include <stdio.h>

int main() {
    int num, sum, temp;

    printf("Enter a six digit number: ");
    scanf("%d", &num);

    while(num > 0) {
        temp = num % 10;
        sum += temp;
        num /= 10;
    }

    printf("Sum of all digits is: %d\n", sum);

    return 0;
}