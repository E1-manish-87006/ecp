/***Write a program to display number of days in the given month and year using switch case
statement.****/
#include<stdio.h>
void main(){
int m,y;
printf("enter year");
scanf("%d",&y);
printf("enter month in form of number");
scanf("%d",&m);
switch(m){
case 1:printf("jan has 31 days");
break;
case 2:if(((y%400==0)&&(y%100!=0))||(y%4==0)){
printf("it is a leap year,feb has 29 days");}
else{
printf("feb has 28 days");}
break;
case 3:
printf("march has 31 days");
break;
case 4:
printf("april has 30 days");
break;
case 5:
printf("may has 31 days");
break;
case 6:
printf("june has 30 days");
break;
case 7:
printf("july has 31 days");
break;
case 8:
printf("august has 31 days");
break;
case 9:
printf("september has 30 days");
break;
case 10:
printf("october has 31 days");
break;
case 11:
printf("november has 30 days");
break;
case 12:
printf("december has 31 days");
break;
default:printf("enter correct number respective to its month");
}
}
