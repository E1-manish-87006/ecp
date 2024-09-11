/***10. Write function to check whether given year is leap or not. Write another function to print
number of days in given month.***/

#include<stdio.h>

void leap(int y);
void noofdays(int m,int y);

int main(){
int y,m;
printf("enter year:");
scanf("%d",&y);
printf("enter month in terms of numbers from 1-12");
scanf("%d",&m);
leap(y);
noofdays(m,y);
return 0;
}

void leap(int y){
if((y%4==0)&&(y%100!=0)||(y%400==0)){
printf("%d is leap year\n",y);}
else{
printf("%d is not leap year\n",y);
}
}

void noofdays(int m,int y){
switch(m){
case 1: printf("jan has 31 days");
break;
case 2: 
if((y%4==0)&&(y%100!=0)||(y%400==0)){
printf("feb has 29 days");
}
else{
printf("feb has 28 days");
}
break;

case 3:
printf("mar has 31 days");
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
printf("july  has 31 days");
break;
case 8:
printf("aug has 31 days");
break;
case 9:
printf("sep has 30 days");
break;
case 10:
printf("oct has 31 days");
break;
case 11:
printf("nov  has 30 days");
break;
case 12:
printf("dec has 31 days");
break;
default: printf("Invalid");
}
}
