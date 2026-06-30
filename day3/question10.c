#include <stdio.h>
int main() {
    int a, b;
    printf("enter the numbers a and b o find prime numbers between them");
    scanf("%d%d", &a, &b);
    for(int n = a; n <= b; n++) {
        int prime = 1;
        if(n <= 1)
            prime = 0;
        for(int i = 2; i * i <= n; i++) {
            if(n % i == 0) {
                prime = 0;
                break;
            }
        }
        if(prime)
            printf("%d ", n);
    }
    return 0;
}