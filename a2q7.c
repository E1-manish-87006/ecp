/***. Write a program to display number of days in the given year. Check condition for leap year. A
year is a leap year if it is divisible by 4 but not by 100, except that years divisible by 400 are leap
years.
a. Without using logical operators
b. Using logical operators
c. Conditional operator***/

#include<stdio.h>
void main(){
int y;
scanf("%d",&y);
/***USING LOGICAL
if(((y%400==0)&&(y%100)!=0)|(y%4==0)){
printf("leap year and contains 366 days");
}
else{
printf("contains 365 days");
}***/
/***WITHOUT LOGICAL
if(y%400==0){
if(y%100!=0){
printf("leap year and contains 366  days");
}}
else if(y%4==0){
printf("leap year and contains 366 days");}
else{
printf("contains 365 days");
}****/
/***USING CONDITIONAL***/
(((y%400==0)&&(y%100!=0))|(y%4==0))?printf("leap year and contains 366 days"):printf("contains 365 days");
}
