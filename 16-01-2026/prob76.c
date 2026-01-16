#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char u[50];
    int i, len, valid = 1;

    scanf("%s", u);
    len = strlen(u);

    if(len < 6 || len > 12 || isdigit(u[0]))
        valid = 0;

    for(i = 0; u[i] != '\0'; i++) {
        if(!(islower(u[i]) || isdigit(u[i]))) {
            valid = 0;
            break;
        }
    }

    if(valid)
        printf("Valid");
    else
        printf("Invalid");

    return 0;
}
