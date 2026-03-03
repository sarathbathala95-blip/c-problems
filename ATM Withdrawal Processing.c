#include <stdio.h>
int main(){
int accountType,balance,withdrawAmount;
scanf("%d%d%d",&accountType,&balance,&withdrawAmount);
switch(accountType){
case 1:if(balance>=withdrawAmount)printf("Transaction Successful\n");
else printf("Insufficient Balance\n");
break;
case 2:if(withdrawAmount>5000)printf("Limit Exceeded\n");
else if(balance>=withdrawAmount)printf("Transaction Successful\n");
else printf("Insufficient Balance\n");
break;
default:printf("Invalid Account Type\n");
}
return 0;
}