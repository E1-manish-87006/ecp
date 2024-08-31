/***3. Write a program to accept number and check whether the number is +ve, -ve and zero.***/

#include<stdio.h>
void main(){
int num;
scanf("%d",&num);
if(num>0){
printf("+ve");}
else if(num<0){
printf("-ve");}
else{
printf("zero");
}
}
