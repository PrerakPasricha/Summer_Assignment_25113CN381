#include <stdio.h>

int main() {
    int a, b, x, y, temp;
    printf("enter the numbers to find lcm of the two mubers");
    scanf("%d%d", &a, &b);
    x = a;
    y = b;
    while(y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }
    printf("%d", (a * b) / x);
    return 0;
}