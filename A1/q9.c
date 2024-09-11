/****Write a program to convert temperature in Celsius to Fahrenheit and vice versa. Formula for
conversion is degree(c)=5/9*(degree(f)-32)*****/
#include<stdio.h>
void main(){
	char temp;
	scanf("%c",&temp);
	if(temp='f'){
		printf("celsius=(5/9)*(%c-32)",temp);}
	if(temp=='c'){
		printf("faherenheit=32+(9/5)*%c",temp);}
}

