/***6. Write a program to accept a 5 digit number and check whether it is a numeric palindrome. (If
reversed number is same as entered number it is called palindrome).***/

#include<stdio.h>
void main(){
int num,rem;
scanf("%d",&num);
int on=num;
int rev=0;
while(num!=0){
rem=num%10;
rev=rev*10+rem;;
num=num/10;

}
if(rev==on){
printf("palindrome");}
else{
printf("not palindrome");
}
}


