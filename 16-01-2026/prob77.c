#include <stdio.h>
#include <string.h>

int main() {
    char email[100];
    char domain[] = "@company.com";

    scanf("%s", email);

    if(strlen(email) >= strlen(domain) &&
       strcmp(email + strlen(email) - strlen(domain), domain) == 0)
        printf("Valid");
    else
        printf("Invalid");

    return 0;
}
