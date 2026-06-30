#include <stdio.h>

int main() {
    int a[100], n, i, first;

    printf("Enter size: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    first = a[0];

    for(i = 0; i < n - 1; i++)
        a[i] = a[i + 1];

    a[n - 1] = first;

    printf("After left rotation:\n");

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}