#include<stdio.h>
int main(){
int type,trips,amt;

scanf("%d%d",&type,&trips);

switch(type){
case 1:
if(trips==1) amt=100;
else amt=800;
break;

case 2:
amt=trips*240;
}

printf("₹%d",amt);
}