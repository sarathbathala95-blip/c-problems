#include<stdio.h>
int main(){
int age;
printf("Age:");
scanf("%d",&age);
if(age<5)
printf("Ticket Free");
else if(age<=12)
printf("Ticket Price:50");
else if(age<=60)
printf("Ticket Price:100");
else
printf("Ticket Price:40");
return 0;
}
