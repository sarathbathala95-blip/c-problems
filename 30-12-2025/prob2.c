#include <stdio.h>
int main() {
int x;
printf("Enter the value =");
scanf("%d",&x);
if (x<=9 && x>=-9){
printf("single digit");
}
else 
{
printf("not single digit");
}
    return 0;
}