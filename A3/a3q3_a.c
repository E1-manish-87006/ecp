/****3.
Write a program to accept a number and
a. Calculate sum of digits of integer
Input: 9362
Output: 9 + 3 + 6 + 2 = 20***/

#include<stdio.h>
void main(){
int num,rem;
scanf("%d",&num);
int sum=0;
int i=0;
while(num!=0){
rem=num%10;
sum+=rem;
num=num/10;

}
printf("sum=%d",sum);
}
