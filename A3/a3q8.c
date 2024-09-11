/***8. Write a program to accept a number and print its prime factors.
Input: 180
Output: 180 = 2 * 2 * 3 * 3 * 5*****/

#include<stdio.h>

int main(){
int num;
scanf("%d",&num);
int prime=0;
int i=1;
while(i<num){
if(num%i!=0){
prime=1;
}
i++;
if(prime==1){
printf("%d",i);
}
}
}
