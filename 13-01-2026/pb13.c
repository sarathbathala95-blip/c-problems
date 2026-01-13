#include <stdio.h>

int main() {
    int dec;
    int bin[32], i=0;
    printf("Enter decimal number: ");
    scanf("%d",&dec);

    int temp = dec;
    while(temp != 0) {
        bin[i] = temp % 2;
        temp /= 2;
        i++;
    }

    printf("Binary = ");
    for(int j=i-1;j>=0;j--)
        printf("%d", bin[j]);
    printf("\n");
    return 0;
}
