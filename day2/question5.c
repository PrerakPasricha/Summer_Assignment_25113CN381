#include <stdio.h>

int main() {
    int n, sum = 0,a;
    printf("enter the number whose sum of digits to find");
    scanf("%d", &n);
    while(n != 0) {
        a=n%10;
        sum =sum+a;
        n =n/10;
    }
    printf("%d", sum);

    return 0;
}