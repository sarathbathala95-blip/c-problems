#include<stdio.h>
int main(){
int n,i,p=0,a=0;
char s;
printf("Students:");
scanf("%d",&n);
for(i=1;i<=n;i++){
printf("S%d(P/A):",i);
scanf(" %c",&s);
if(s=='P'||s=='p')p++;
else if(s=='A'||s=='a')a++;
}
printf("P:%d\nA:%d",p,a);
return 0;
}
