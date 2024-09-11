#include<stdio.h>
#include"mymath.h"
extern int flag;

int sum(int n1,int n2){
return n1+n2;}

int sub(int n1,int n2){
return n1-n2;}

int mul(int n1,int n2){
return n1*n2;
}

int div(int n1,int n2){
if(n2==0){
printf("zero by division error");
flag=1;}
else{
return n1/n2;}
}

