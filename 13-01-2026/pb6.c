#include <stdio.h>

int factorial(int n) {
    int f = 1;
    for(int i=1;i<=n;i++) f *= i;
    return f;
}

int main() {
    int num, temp, sum = 0;
    printf("Enter number: ");
    scanf("%d",&num);

    temp = num;
    while(temp != 0) {
        sum += factorial(temp % 10);
        temp /= 10;
    }

    if(sum == num)
        printf("Strong\n");
    else
        printf("Not Strong\n");

    return 0;
}
