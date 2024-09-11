/****b. Reverse the number
Input: 9362
Output: 2639***/

#include<stdio.h>
void main(){
int num,rem;
scanf("%d",&num);
int rev=0;
while(num!=0){
rem=num%10;
rev=rev*10+rem;
num=num/10;
}
printf("reversed num=%d",rev);
}

