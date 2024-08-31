/****5. Write a program to find maximum of three numbers using
a. If – else
b. conditional operator.****/
#include<stdio.h>
void main(){
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
/***if(a>b){
if(a>c){
printf("a is max");}
else{
printf("c is max");
}}
else{
if(b>c){
printf("b is max");
}
else{
printf("c is max");
}
}
}****/

(a>b)?(a>c)?printf("a is max"):printf("c is max"):(b>c)?printf("b is max"):printf("c is max");
}
