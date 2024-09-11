/**15. Modify the menu driven program for four function calculator. Add a menu item to choose
option exit. The program continues till user chooses option exit.**/

#include<stdio.h>

int main(){
int ch;
printf("0.exit 1.add 2.sub 3.mul 4.div");
scanf("%d",&ch);
int n1,n2;
scanf("%d%d",&n1,&n2);
do{
switch(ch){
case 0:
break;
case 1:
printf("%d is sum",n1+n2);
break;
case 2:
printf("%d is sub",n1-n2);
break;
case 3:
printf("%d is mul",n1*n2);
break;
case 4:
printf("%d is div",n1/n2);
break;
default: printf("invalid");
}


printf("0.exit 1.add 2.sub 3.mul 4.div");
scanf("%d",&ch);}
while(ch!=0);
return 0;
}
