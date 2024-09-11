/**. Write a function to calculate factorial of a given number.***/

#include<stdio.h>
int fact(int n);
int main(){
int n;
scanf("%d",&n);
printf("%d is fact",fact(n));
}
int fact(int n){
int fact=1;
for(int i=2;i<=n;i++){
fact=i*fact;
}
return fact;
}
