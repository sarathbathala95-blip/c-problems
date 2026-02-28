#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);

    if(num>=10 && num<=20)
        printf("Within range");
    else
        printf("Out of range");

    return 0;
}