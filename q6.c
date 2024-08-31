/***Write a program to accept an integer value and print its table.***/
#include<stdio.h>
void main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=10;i++){
		printf("%d*%d=%d\n",n,i,n*i);
	}}

