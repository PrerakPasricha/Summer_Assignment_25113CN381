#include <stdio.h>

int main() {
    int n, product = 1,a;
    printf("enter number ot find the product of digits");
    scanf("%d", &n);

    while(n != 0) {
        a=n%10;
        product =product*a;
        n =n/10;
    }
    printf("%d", product);

    return 0;
}