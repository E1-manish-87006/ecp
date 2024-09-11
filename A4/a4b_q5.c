/***Write a function to print a given number in binary format.***/

#include<stdio.h>

void printbin(int n);

int main(){
int n;
scanf("%d",&n);
printbin(n);
return 0;
}



void printbin(int n){
	int bin=0,i=1,rem=0;
	while(n!=0){
		rem=n%2;
		n=n/2;
		bin+=rem*i;
		i*=10;
	}
	printf("%d",bin);
	}
