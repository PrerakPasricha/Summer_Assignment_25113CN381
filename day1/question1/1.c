#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("enter number so that you cn get sum of first n natural numbers");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
        sum += i;
    printf("%d", sum);

    return 0;
}