#include <stdio.h>
int main(){
char x;
printf("Enter a character = ");
scanf(" %c",&x);

if((x>='A'&&x<='Z')||(x>='a'&&x<='z')){
printf("Its an alphabet");
}
else{
printf("Its not an alphabet");
}
return 0;
}
