#include<stdio.h>
int main(){
int t,u,b=0;
 scanf("%d%d",&t,&u);
switch(t){
       case 1:
if(u<=100) b=u*3;
else{ b=100*3+(u-100)*5; b-=80; }
 break;
case 2:
if(u<=100) b=u*7;
else b=100*7+(u-100)*10;
break;
default:
printf("Invalid Connection Type");
return 0;
}
printf("Bill ₹%d",b);
return 0;
}
