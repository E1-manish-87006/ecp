/***20. Write a program to display
a. Prime numbers between 1 to 100
b. Armstrong Numbers between 1 to 500*********/

#include<stdio.h>

int main(){

for(int i=2;i<=100;i++){
	int isprime=1;
	for(int j=2;j*j<=i;j++){
		if(i%j==0){
			isprime=0;
		
		}
	}
	if(isprime){
	printf("%d\n",i);
	}
}
return 0;
}
