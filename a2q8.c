/****8. Write a program that will calculate the price for a quantity entered from the keyboard, given
that the unit price is Rs 5 and there is a discount of 10 percent for quantities over 30 and a 15
percent discount for quantities over 50.****/

#include<stdio.h>
void main(){
int q;
scanf("%d",&q);
if(q<=30){
printf("price is %d",q*5);}
else if(q>30 && q<50){
printf("price is %.2f",q*5*0.90);}
else{
printf("price is %.2f",q*5*0.85);}}

