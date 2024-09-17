#include<stdio.h>
int main(){
int n1,n2;
printf("enter n1 and n2");
scanf("%d%d\n",&n1,&n2);
char ch;
printf("enter +,-,*,/");
scanf(" %c",&ch);
switch(ch){
case '+':
printf("%d is sum\n ",(n1+n2));
break;
case '-':
printf("%d is sub\n",n1-n2);
break;
case '*':
printf("%d is mul\n",n1*n2);
break;
case '/':
if(n2!=0){
printf("%d is div\n",n1/n2);}
else{
printf("zero division error\n");}
break;
default: printf("invalid character\n");
}
return 0;
}

