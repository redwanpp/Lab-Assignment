#include <stdio.h>

typedef struct salary SS;

struct salary{
    int ID;
    int WH;
    double amount;
    double total;
};

int main() {
    SS employ;
    

    printf("Enter employee ID: ");
    scanf("%d", &employ.ID);
    printf("Enter Work Hour of the employee: ");
    scanf("%d", &employ.WH);
    printf("Enter amount for per hour: ");
    scanf("%d", &employ.amount);

    employ.total = employ.WH * employ.amount;

    printf("\n----------------------------------\n");
    printf("ID           : %d\n", employ.ID);
    printf("Total salary : %d\n", employ.total);

    return 0;
}