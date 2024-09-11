/***Write a function to reverse the array elements.***/

#include<stdio.h>
void fun(int a[],int n);
int main(){
int n=5;
int a[]={1,2,3,4,5};

fun(a,n);
}
void fun(int a[],int n){
for(int i=n-1;i>=0;i--){
printf("%d",a[i]);
}
}

