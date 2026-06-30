#include <stdio.h>

struct Book {
    int id;
    char name[50];
};

int main() {
    struct Book b;

    scanf("%d%s", &b.id, b.name);

    printf("Book ID : %d\n", b.id);
    printf("Book Name : %s", b.name);

    return 0;
}