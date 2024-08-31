/***9. Write a program to display number of days in the given month and year using
a. Using If else ladder.
b. Using logical operators.***/

#include<stdio.h>
void main(){
int y;
printf("enter year:");
scanf("%d",&y);
char m;
printf("enter month");
scanf("%c",&m);
if(m=='j'){
printf("jan has 31 days");}
else if(m=='f'){
if(((y%400==0)&&(y%100!=0))|(y%4==0)){
printf("feb has 29 days");}
else{
printf("feb has 28 days");}
}
/****else if(m=='march'){
printf("march has 31 days");}
else if(m=='april'){
printf("april has 30 days");}
else if(m=='may'){
printf("may has 31 days");}
else if(m=='june'){
printf("june has 30 days");}
else if(m=='july'){
printf("july has 31 days");}
else if(m=='august'){
printf("aug has 31 days");}
else if(m=='september'){
printf("sep has 30 days");}
else if(m=='october'){
printf("oct has 31 days");}
else if(m=='november'){
printf("nov has 30 days");}
else if(m=='december'){
printf("dec has 31 days");}****/
}
