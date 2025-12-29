#include<stdio.h>
int main()
{
int m;
scanf("%d",&m);

if(m>=80)
printf("Grade A");
else if(m>=60)
printf("Grade B");
else if(m>=40)
printf("Grade C");
else
printf("Fail");
return 0;
}
