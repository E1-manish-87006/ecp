/***14. Write a program to accept a number and check whether it is Prime no***/

#include<stdio.h>

void main(){

int n;
scanf("%d",&n);
int isprime=0;
for(int i=1;i<=n;i++){
if(n%i==0){
isprime++;}
}
if(isprime>2){
printf("not prime number");}

else{
printf("prime no.");

}

}
