/****1. Write a function to calculate factorial of a given number using recursion.****/

#include<stdio.h>
int fact(int n);
int  main(){
int n;
scanf("%d",&n);
printf("%d is fact",fact(n));
return 0;}

int fact(int n){
if(n==0 || n==1){
return 1;}
else{
return n*fact(n-1);
}
}
