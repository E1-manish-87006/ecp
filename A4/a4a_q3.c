/****Write a function to implement four function calculator. Function would take operands and
operator as arguments and returns result.****/

#include<stdio.h>

int add(int n1,int n2);
int sub(int n1,int n2);
int mul(int n1,int n2);
int div(int n1,int n2);

int main(){
int n1,n2;
printf("enter n1 & n2:\n");
scanf("%d%d",&n1,&n2);
int ch;
scanf("%d",&ch);
printf("1:add 2:sub 3:mul 4:div ");
switch(ch){
case 1:
printf("%d is sum",add(n1,n2));
break;
case 2:
printf("%d is sub", sub(n1,n2));
break;
case 3:
printf("%d is mul",mul(n1,n2));
break;
case 4:
printf("%d is div",div(n1,n2));
break;
default: printf("invalid");
}
}
int add(int n1,int n2){
	return n1+n2;}
int sub(int n1,int n2){
return n1-n2;}
int mul(int n1,int n2){
return n1*n2;}
int div(int n1,int n2){
return n1/n2;
}


