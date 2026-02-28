#include <stdio.h>
int main() {
    int choice,a,b;
    scanf("%d",&choice);
    scanf("%d %d",&a,&b);

    switch(choice)
    {
        case 1: printf("Sum = %d",a+b); break;
        case 2: printf("Sub = %d",a-b); break;
        case 3: printf("Mul = %d",a*b); break;
        case 4: printf("Div = %d",a/b); break;
        default: printf("Invalid choice");
    }

    return 0;
}