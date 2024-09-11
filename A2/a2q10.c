/***0. Write a program to accept a character c and display category of the input character.
ALPHABET
: c is a letter (65 to 90 or 97 to 122)
UPPERCASE
: c is an uppercase letter (65 to 90)
LOWERCASE : c is a lowercase letter (97 to 122)
DIGIT
: c is a digit (48 to 57)
SPACE
: c is a space(32), tab(9), carriage return(13), new line(10)
OTHER
: Not listed above****/
#include<stdio.h>
void main(){
char ch;
scanf("%c",&ch);
if((ch>=65 && ch<=90)||(ch>=97 && ch<=122)){
printf("ch is a alphabet");}
else if(ch>=65 && ch<=90){
printf("ch is uppercase letter");}
else if(ch>=97 && ch<=122){
printf("ch is lowercase letter");}
else if(ch>=48 && ch<=57){
printf("ch is a digit");}
else if(ch==32){
printf("ch is space");}
else if(ch==9){
printf("ch is tab");}
else if(ch==13){
printf("ch is carraige return ");}
else if(ch==10){
printf("ch is new line");}
else{
printf("not listed above");}

}
