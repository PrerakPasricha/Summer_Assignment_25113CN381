#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int guess;
    srand(time(0));

    int number = rand() % 100 + 1;

    do {
        printf("Guess Number (1-100): ");
        scanf("%d", &guess);

        if(guess > number)
            printf("Too High\n");
        else if(guess < number)
            printf("Too Low\n");

    } while(guess != number);

    printf("Correct Guess!");

    return 0;
}