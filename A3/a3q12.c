/***12. Write a program to accept integer values of base and index and calculate power of base to
index.
Input:
base: 2
Output: 32
Input:
base: 8
Output: 512*****/

#include<stdio.h>

void main(){
int b,e;
scanf("%d%d",&b,&e);
int pow=1;
for(int i=1;i<=e;i++){
pow=pow*b;
}
printf("%d",pow);
}

