/***Write a program to accept a number and print unique pairs of numbers such that multiplication of
the pair is given number
Input: 24
Output:
1 * 24 = 24
2 * 12 = 24
3 * 8 = 24
4 * 6 = 24*****/

#include<stdio.h>
int main(){
int num;
scanf("%d",&num);
int i=1;
while(i<=(num/6)){
if(num%i==0){
printf("%d*%d=%d\n",i,num/i,num);}
i++;
}
return 0;
}
