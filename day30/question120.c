#include <stdio.h>
struct Student {
    int roll;
    char name[30];
    float marks;
};
int main() {
    struct Student s[100];
    int n = 0, choice, i;
    do {
        printf("\n1.Add Student\n2.Display Students\n3.Exit\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter Roll Name Marks: ");
                scanf("%d %s %f",
                      &s[n].roll,
                      s[n].name,
                      &s[n].marks);
                n++;
                break;
            case 2:
                printf("\nRoll\tName\tMarks\n");
                for (i = 0; i < n; i++)
                    printf("%d\t%s\t%.2f\n",
                           s[i].roll,
                           s[i].name,
                           s[i].marks);
                break;
            case 3:
                printf("Thank You\n");
                break;
            default:
                printf("Invalid Choice\n");
        }

    } while (choice != 3);
    return 0;
}