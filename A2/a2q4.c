/****4. Write a program to find maximum of two numbers using
a. If – else
b. conditional operator.***/
#include<stdio.h>
void main(){
int n1,n2;
scanf("%d%d",&n1,&n2);
/**if(n1>n2){
printf("n1=%d  is max number",n1);
}
else{
printf("n2=%d  is max number",n2);
}**/
(n1>n2)?printf("n1 is max"):printf("n2 is max");
}

