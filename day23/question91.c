#include <stdio.h>
#include <string.h>

int main() {
    char s1[100],s2[100];
    int count1[256]={0},count2[256]={0},i;

    gets(s1);
    gets(s2);

    for(i=0;s1[i];i++)
        count1[(unsigned char)s1[i]]++;

    for(i=0;s2[i];i++)
        count2[(unsigned char)s2[i]]++;

    for(i=0;i<256;i++) {
        if(count1[i]!=count2[i]) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");

    return 0;
}