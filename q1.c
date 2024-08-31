/***
1. Write a program to Accept two numbers and
a. find its sum.
b. find its difference.
c. find its product.
Test the program using different integral data type signed/unsigned char/int/long.
First test the result using small values. Then test the same program using large values.
Observe the results.****/
#include<stdio.h>
int main(){
	int n1,n2,sum,diff,prod;
	scanf("%d%d",&n1,&n2);
	printf("sum is %d\n",n1+n2);
	printf("difference is %d\n",n1-n2);
	printf("product is %d\n",n1*n2);
	return 0;}



