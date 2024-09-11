/***9. Write a program to display number of days in the given month and year using
a. Using If else ladder.
b. Using logical operators.***/

#include<stdio.h>
int  main(){
int y;
printf("enter year:");
scanf("%d",&y);
/****char m;
printf("enter month\n");
scanf("%*c%c",&m);
if(m==0){
printf("jan has 31 days");}
else if(m==1){
if(((y%400==0)&&(y%100!=0))|(y%4==0)){
printf("feb has 29 days");}
else{
printf("feb has 28 days");}
}
else if(m=='m'){
printf("march has 31 days");}
else if(m=='a'){
printf("april has 30 days");}
else if(m=='y'){
printf("may has 31 days");}
else if(m=='j'){
printf("june has 30 days");}
else if(m=='l'){
printf("july has 31 days");}
else if(m=='g'){
printf("aug has 31 days");}
else if(m=='s'){
printf("sep has 30 days");}
else if(m=='o'){
printf("oct has 31 days");}
else if(m=='n'){
printf("nov has 30 days");}
else if(m=='d'){
printf("dec has 31 days");}****/

/***LOGICAL OPERATORS***/
int m;
printf("enter month in form of digits in serial order:");
scanf("%d",&m);
if(m==1 || m==3 || m==5 || m==7 || m==9 || m==11){
printf("days are 30 in entered month");}
else if(m==4 || m==6 || m==8 || m==10 || m==12){
printf("days are 31 in entered month");}
else if(m==2){
if(((y%400==0)&&(y%100!=0))||(y%4==0)){
printf("leap year so contain 29 days in feb");}
else{
printf("contain 28 days");}
}

return 0;
}

