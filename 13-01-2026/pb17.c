#include <stdio.h>

int main() {
    int n, arr[100], i, j, k;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Array after removing duplicates: ");
    for(i=0;i<n;i++) {
        int duplicate = 0;
        for(j=0;j<i;j++) {
            if(arr[i] == arr[j]) {
                duplicate = 1;
                break;
            }
        }
        if(!duplicate)
            printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
