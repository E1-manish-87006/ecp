#include<stdio.h>
#include"mymath.h"

int menu();
int flag=0;
int main(){
int choice;

while((choice=menu())!=0){
int o1,o2;
printf("enter o1 and o2");
scanf("%d%d",&o1,&o2);
int res;

switch(choice){
case 0:
break;

case 1:
res=sum(o1,o2);
break;

case 2:
res=sub(o1,o2);
break;

case 3:
res=mul(o1,o2);
break;

case 4:
res=div(o1,o2);
break;

default:
printf("Inavlid choice\n");
}
if(flag==0){
printf("res=%d\n",res);}
flag=0;
}
return 0;
}
