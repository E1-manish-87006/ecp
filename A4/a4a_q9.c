/***9. Write a function to indicate whether given number is prime or not. Write another function to
print prime numbers in the given range.***/

#include<stdio.h>
void printprime(int min,int max);
void checkprime(int num);
int main(){
checkprime(10);
printprime(2,10);

return 0;
}
void printprime(int min,int max){
	for(int i=min;i<=max;i++){
		int isprime=1;
		for(int j=2;j*j<=i;j++){
			if(i%j==0){
				isprime=0;
				break;
			}
		}
		if(isprime){
			printf("%d\n",i);}
	}
}

void checkprime(int num){
	int isprime=1;
	for(int i=2;i*i<=num;i++){
		if(num%i==0){
			isprime=0;
			break;
			}
		}
	if(isprime){
		printf("%d is prime\n ",num);
		}
	else{
	printf("%d is not  prime\n",num);
	}
}

