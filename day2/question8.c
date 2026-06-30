#include <stdio.h>

int main() {
    int number, temp, rev = 0,a;
    printf("enter the number");
    scanf("%d", &number);
    temp = number;
    while(temp != 0) {
        a=temp%10;
        rev = rev * 10 + a;
        temp =temp/10;
    }

    if(rev == number)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}