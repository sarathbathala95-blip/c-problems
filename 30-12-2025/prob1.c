#include <stdio.h>
int main() {
int x;
printf("Enter the value =");
scanf("%d",&x);
if (x%3==0 && x%5==0){
printf("yes");
}
else 
{
printf("no");
}
    return 0;
}