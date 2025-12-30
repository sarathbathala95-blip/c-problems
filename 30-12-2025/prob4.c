#include <stdio.h>
int main() {
int x;
printf("Enter the value =");
scanf("%d",&x);
if (x%2==0){
printf("its divisable by 2");
}
else if (x%3==0)
{
printf("itz divisable by 3");
}
else {
printf("its divisable by other number");
}
    return 0;
}