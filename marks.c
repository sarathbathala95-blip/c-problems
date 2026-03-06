#include <stdio.h>
int main() {
int a;
scanf("%d",&a);
if (a>=95){
printf("grade:A");}
else if (a>=85){
printf("grade:B");}
else if (a>=75){
printf("grade:C");}
else if(a>=65){
printf("grade:D");}
else if(a>=45){
printf("grade:E");}
else{
printf("fail");}
    return 0;
}