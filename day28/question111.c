#include <stdio.h>

int main() {
    char name[30];
    int seats;

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Seats: ");
    scanf("%d", &seats);

    printf("\nBooking Successful\n");
    printf("Passenger : %s\n", name);
    printf("Seats : %d\n", seats);

    return 0;
}