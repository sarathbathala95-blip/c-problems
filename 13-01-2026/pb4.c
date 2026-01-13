#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, sum = 0, digits = 0;
    printf("Enter number: ");
    scanf("%d", &num);

    temp = num;
    while(temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while(temp != 0) {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }

    if(sum == num)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}
