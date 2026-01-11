#include <stdio.h>
int main() {
    char s[100];
    int i, len = 0, flag = 0;

    scanf("%s", s);

    for(i=0;s[i]!='\0';i++)
        len++;

    for(i=0;i<len/2;i++) {
        if(s[i] != s[len-i-1]) {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
