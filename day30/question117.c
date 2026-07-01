#include <stdio.h>
struct Student {
    int roll;
    char name[30];
    float marks;
};
int main() {
    struct Student s[20];
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Student %d\n", i + 1);
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
    }
    printf("\nRecords\n");
    printf("Roll\tName\tMarks\n");
    for (i = 0; i < n; i++)
        printf("%d\t%s\t%.2f\n", s[i].roll, s[i].name, s[i].marks);
    return 0;
}