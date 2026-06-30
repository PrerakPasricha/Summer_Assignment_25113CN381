#include <stdio.h>

struct Employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    struct Employee e;

    scanf("%d%s%f", &e.id, e.name, &e.salary);

    printf("ID : %d\n", e.id);
    printf("Name : %s\n", e.name);
    printf("Salary : %.2f\n", e.salary);

    return 0;
}