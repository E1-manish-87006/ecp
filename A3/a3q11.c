/****Write a program to find factorial of given number.***/

#include<stdio.h>

void main(){
int n;
scanf("%d",&n);
int fact=1;
if(n==0){
fact=1;}
else if(n==1){
fact=1;
}
else{
for(int i=2;i<=n;i++){
fact=fact*i;
}
printf("%d is fact",fact);
}
}
