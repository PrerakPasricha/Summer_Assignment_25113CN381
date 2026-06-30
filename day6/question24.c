#include <stdio.h>
int main() {
    int x, n;
    int result = 1;
    scanf("%d%d", &x, &n);
    for(int i = 1; i <= n; i++)
        result *= x;
    printf("%d", result);
    
    return 0;
}