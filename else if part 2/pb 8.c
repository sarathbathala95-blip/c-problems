#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
if (a==7 || a==6){
printf("week end");}
else if (a<=0 || a>=8){
   printf(" Enter valid number ");
}
else{
printf("week day ");    }
    return 0;
}