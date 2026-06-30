#include <stdio.h>
int main() {
    int binary, rem, base = 1, decimal = 0;
    printf("enter binary number");
    scanf("%d", &binary);
    while(binary > 0) {
        rem = binary % 10;
        decimal += rem * base;
        base *= 2;
        binary /= 10;
    }
    printf("%d", decimal);
    return 0;
}