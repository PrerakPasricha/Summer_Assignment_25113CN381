#include <stdio.h>
struct Book {
    int id;
    char title[30];
};
int main() {
    struct Book b[10];
    int n, i;
    printf("Number of books: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d %s", &b[i].id, b[i].title);
    }
    printf("\nLibrary Books\n");
    for (i = 0; i < n; i++)
        printf("%d %s\n", b[i].id, b[i].title);
    return 0;
}