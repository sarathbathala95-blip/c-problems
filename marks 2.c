#include <stdio.h>
int main() {
    int a,b,c,d,e;
    int average;
    int total;
    printf("enter sub 1=");
    scanf("%d",&a);
      printf("enter sub 2=");
    scanf("%d",&b);
      printf("enter sub 3=");
    scanf("%d",&c);
      printf("enter sub 4=");
    scanf("%d",&d);
      printf("enter sub 5=");
    scanf("%d",&e);
total=a+b+c+d+e;
average = total / 5;
if (average>=90){
printf("grade:A");}
else if (average>=80 && average<90){
printf("grade:B");}
else if (average>=70 && average<80){
printf("grade:C");}
else if (average>=60 && average<70){
printf("grade:D");}
else if (average>=50 && average<60){
printf("grade:E");}
else {
printf("grade:F");}
    return 0;
}