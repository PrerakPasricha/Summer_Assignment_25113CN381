#include <stdio.h>
struct Item {
    int id;
    char name[30];
    int qty;
};
int main() {
    struct Item item[20];
    int n, i;
    printf("Enter number of items: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Item %d\n", i + 1);
        scanf("%d %s %d", &item[i].id, item[i].name, &item[i].qty);
    }
    printf("\nInventory\n");
    printf("ID\tName\tQty\n");
    for (i = 0; i < n; i++)
        printf("%d\t%s\t%d\n", item[i].id, item[i].name, item[i].qty);
    return 0;
}