/****. Write a program to accept two numbers and display division of the two numbers. Check for
divide by zero error. If divider is zero then display appropriate error message***/

#include<stdio.h>

void main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(b!=0){
		printf("%d",(a/b));
		}
	else{
		printf("divide by zero error");
		}
		}
