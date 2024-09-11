/**Write a function to calculate nth term of the Fibonacci series using recursion. Write another
function to print given number of terms of Fibonacci series.***/

#include<stdio.h>

int fib(int n);
void printfib(int n);
int main(){
int n;
scanf("%d",&n);
printfib(n);
return 0;
}


void printfib(int n){
for(int i=1;i<=n;i++){
printf("%d",fib(i));}

}

int fib(int n){
	if(n==0){
	return -1;
	}
	else if(n==1){
	return 0;
	}
	else if(n==2){
	return 1;
	}
	else{
	return fib(n-1)+fib(n-2);
	}
}
	

