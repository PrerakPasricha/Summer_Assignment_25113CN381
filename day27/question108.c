#include <stdio.h>

int main() {
    int m1, m2, m3;
    int total;
    float per;

    scanf("%d%d%d", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    per = total / 3.0;

    printf("Total = %d\n", total);
    printf("Percentage = %.2f\n", per);

    if(per >= 40)
        printf("Pass");
    else
        printf("Fail");

    return 0;
}