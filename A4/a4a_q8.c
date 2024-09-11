/****. Write a function to return next term of Fibonacci series with each call to the function.***/

#include<stdio.h>

int fib(int n);

int main(){
int n;
scanf("%d",&n);
for(int i=1;i<=n;i++){
printf("%d\n",fib(i));
}
printf("\n");
return 0;
}

int fib(int n){
int n1=0;
int n2=1;
if(n==1) return n1;
if(n==2) return n2;
for(int i=3;i<=n;i++){
int n3=n1+n2;
n1=n2;
n2=n3;
}
return n2;
}
