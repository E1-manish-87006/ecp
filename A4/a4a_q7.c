/***7. Write a function to print given number of terms of Fibonacci series.***/
#include<stdio.h>

int fib(int n);

int main(){
int n;
scanf("%d",&n);
fib(n);
return 0;
}

int fib(int n){
int n1=0;
int n2=1;
printf("%d\n %d\n",n1,n2);
int n3;
for(int i=3;i<=n;i++){
n3=n1+n2;
printf("%d\n", n3);
n1=n2;
n2=n3;
}
printf("\n");

}
