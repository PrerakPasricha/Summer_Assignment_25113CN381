#include <stdio.h>
int main() {
    int arr[100], n, i, choice, sum = 0;
    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    do {
        printf("\n1.Display\n2.Sum\n3.Maximum\n4.Exit\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                for (i = 0; i < n; i++)
                    printf("%d ", arr[i]);
                printf("\n");
                break;
            case 2:
                sum = 0;
                for (i = 0; i < n; i++)
                    sum += arr[i];
                printf("Sum=%d\n", sum);
                break;
            case 3:
            {
                int max = arr[0];
                for (i = 1; i < n; i++)
                    if (arr[i] > max)
                        max = arr[i];
                printf("Maximum=%d\n", max);
                break;
            }
            case 4:
                printf("Exit\n");
                break;
            default:
                printf("Invalid\n");
        }
    } while (choice != 4);
    return 0;
}