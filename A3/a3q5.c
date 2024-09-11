/***Write a program to find factorial of given number.                      
 Input: 5
 Output: 1 * 2 * 3 * 4 * 5 = 120***/
   
#include<stdio.h>
void main(){
int num;
scanf("%d",&num);
int fact=1;
int i=1;
while(i<=num){
fact*=i;
i++;
}
printf("factorial of %d id %d",num,fact);
}

