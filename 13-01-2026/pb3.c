#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter string: ");
    gets(str);

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ')
            count++;
    }

    printf("Spaces = %d\n", count);
    return 0;
}
