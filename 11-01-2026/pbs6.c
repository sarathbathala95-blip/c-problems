#include <stdio.h>
int main() {
    char a[100], b[100];
    int i, flag = 0;

    scanf("%s %s", a, b);

    for(i=0;a[i]!='\0' || b[i]!='\0';i++) {
        if(a[i] != b[i]) {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("Equal");
    else
        printf("Not Equal");

    return 0;
}
