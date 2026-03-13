#include<stdio.h>
int main(){
int type,age;

scanf("%d%d",&type,&age);

switch(type){
case 1:
if(age<=5) printf("₹1500");
else printf("₹2500");
break;

case 2:
if(age<=5) printf("₹4000");
else printf("₹6000");
}
}