
/***Write a program to accept a number and print the number in character, decimal, octal and hex
formats.***/
#include<stdio.h>
void main(){
	int num;
	scanf("%d",&num);
	printf("num is %d",num);
	printf("hex: %x ",num);
	printf("oct: %o",num);
}
