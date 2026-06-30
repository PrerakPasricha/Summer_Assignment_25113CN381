#include <stdio.h>

int main() {
    char str[100];
    int i,length=0;

    gets(str);

    while(str[length]!='\0')
        length++;

    printf("Reverse = ");

    for(i=length-1;i>=0;i--)
        printf("%c",str[i]);

    return 0;
}