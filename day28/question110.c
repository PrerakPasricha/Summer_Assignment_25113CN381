#include <stdio.h>

struct Bank {
    int accNo;
    char name[30];
    float balance;
};

int main() {
    struct Bank b;

    scanf("%d%s%f", &b.accNo, b.name, &b.balance);

    printf("Account : %d\n", b.accNo);
    printf("Name : %s\n", b.name);
    printf("Balance : %.2f", b.balance);

    return 0;
}