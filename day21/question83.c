#include <stdio.h>

int main() {
    char str[100];
    int i,v=0,c=0;

    gets(str);

    for(i=0;str[i]!='\0';i++) {
        if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z')) {
            char ch=str[i]|32;

            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                v++;
            else
                c++;
        }
    }

    printf("Vowels = %d\n",v);
    printf("Consonants = %d",c);

    return 0;
}