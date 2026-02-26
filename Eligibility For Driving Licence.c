#include <stdio.h>
int main() {
    int a;
    printf("Enter Your Age");
    scanf("%d",&a);
    if (a>=18)
    printf("Eligible For Driving lisence");
    else 
    printf("Your Age is %d You Are Not Eligible For Driving lisence",a);
    return 0;
}