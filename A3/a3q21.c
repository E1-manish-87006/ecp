/****21. Write a program to display First 5 prime numbers after a given number.
Input: 7
Output: 11 13 17 19 23*****/

#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int c=0;
	for(int i=n+1;;i++){
		int isprime=1;
		for(int j=2;j*j<=i;j++){
			if(i%j==0){
			isprime=0;
			}
		}
		if(isprime){
			printf("%d\n",i);
			c++;
			if(c==5){
				break;}
		}
	}
	return 0;
}

