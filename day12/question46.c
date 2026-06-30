#include <stdio.h>

int power(int a, int b) {
    int i, result = 1;

    for(i = 1; i <= b; i++)
        result *= a;

    return result;
}

int isArmstrong(int n) {
    int temp = n, digits = 0, sum = 0, rem;

    while(temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;

    while(temp > 0) {
        rem = temp % 10;
        sum += power(rem, digits);
        temp /= 10;
    }

    return sum == n;
}

int main() {
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    if(isArmstrong(n))
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}