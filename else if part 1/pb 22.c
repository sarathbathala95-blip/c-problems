#include <stdio.h>
int main() {
    int month;
    scanf("%d",&month);

    if(month==2)
        printf("28 or 29 days");
    else if(month==4||month==6||month==9||month==11)
        printf("30 days");
    else if(month>=1 && month<=12)
        printf("31 days");
    else
        printf("Invalid month");

    return 0;
}