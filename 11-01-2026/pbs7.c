#include <stdio.h>
int main() {
    char s[100], r[100];
    int i, j = 0;

    scanf("%s", s);

    for(i=0;s[i]!='\0';i++);
    i--;

    while(i>=0) {
        r[j++] = s[i--];
    }
    r[j] = '\0';

    printf("%s", r);
    return 0;
}
