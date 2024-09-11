/***9. Write a function to implement four function calculator. The return value indicates the error (due
to zero denominator in case of division). The result is returned via out-parameter.***/

#include<stdio.h>
int sum(int *p1,int *p2);
int sub(int *p1,int *p2);
int mul(int *p1, int *p2);
int div(int *p1,int *p2);


int main(){
int n1,n2;
scanf("%d%d",&n1,&n2);
int *p1=&n1;
int *p2=&n2;
int ch;
printf("enter 1:add 2: sub 3:mul 4:div");
scanf("%d",&ch);
int *pch=&ch;
switch(*pch){
case 1:
printf("sum is %d",sum(&n1,&n2));
break;
case 2:
printf("diff is %d",sub(&n1,&n2));
break;
case 3:
printf("mul is %d",mul(&n1,&n2));
break;
case 4:
if(n2!=0){
printf("div is %d",div(&n1,&n2));}
else{
printf("zero by division error");}
break;
default:
printf("enter valid input");
}
return 0;
}

int sum(int *p1,int *p2){
	return (*p1)+(*p2);}


int sub(int *p1,int *p2){
return (*p1)-(*p2);}

int mul(int *p1,int *p2){
return (*p1)*(*p2);
}

int div(int *p1,int *p2){
return (*p1)/(*p2);
}

