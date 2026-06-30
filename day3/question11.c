#include <stdio.h>

int main() {
    int a, b, temp;
    printf("enter the numbers to find gcd of these two numbers");
    scanf("%d%d", &a, &b);
    while(b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    printf("%d", a);
    return 0;
}