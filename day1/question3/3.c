#include <stdio.h>

int main() {
    int n;
    int fact = 1;
    printf("enter the number for finding the factorial ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
        fact *= i;
    printf("%d", fact);

    return 0;
}