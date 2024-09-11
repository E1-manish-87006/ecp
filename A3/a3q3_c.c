/***Check whether given number is numeric palindrome or not
Input: 9362
Output: 9362 is not a numeric palindrome
Input: 36963
Output: 36963 is a numeric palindrome***/

#include<stdio.h>
void main(){
int num,rem;
scanf("%d",&num);
int on=num;
int rev=0;
while(num!=0){
rem=num%10;
rev=rev*10+rem;
num=num/10;
}
if(on==rev){
printf("%d is a numeric palindrome",on);}
else{
printf("%d is not a numeric palindrome",on);}
}
