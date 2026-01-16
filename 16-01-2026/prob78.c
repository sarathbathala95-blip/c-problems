#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char p[50];
    int i, u = 0, l = 0, d = 0;

    scanf("%s", p);

    if(strlen(p) < 8) {
        printf("Weak");
        return 0;
    }

    for(i = 0; p[i] != '\0'; i++) {
        if(isupper(p[i])) u = 1;
        else if(islower(p[i])) l = 1;
        else if(isdigit(p[i])) d = 1;
    }

    if(u && l && d)
        printf("Strong");
    else
        printf("Weak");

    return 0;
}
