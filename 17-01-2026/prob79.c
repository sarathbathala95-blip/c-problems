#include <stdio.h>

int main() {
    char s[200];
    int i, count = 0;

    fgets(s, sizeof(s), stdin);

    for(i = 0; s[i] != '\0'; i++) {
        if((i == 0 && s[i] != ' ' && s[i] != '\n') ||
           (s[i] != ' ' && s[i] != '\n' && s[i-1] == ' '))
            count++;
    }

    printf("%d", count);
    return 0;
}
