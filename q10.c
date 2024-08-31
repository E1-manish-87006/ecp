/****Write a program to calculate Area and Perimeter of Triangle for given length of three sides of
triangle. Use sqrt() function from math.h to calculate square root.
Perimeter = a + b + c␎ ␏ ␐ ␏ ␑
Area = ␒␓ ␆ ␇␓ ␎ ␆ ␇␓ ␐ ␆ ␇␓ ␑
Test the program using values 3,4,5 and 1, 2, 3 and 1, 2, 4 for a, b, c. Observe the results.*****/
#include<stdio.h>
#include<math.h>
void main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("perimeter=%d",(a+b+c));
	float s=(a+b+c)/2;
	float  k=s*(s-a)*(s-b)*(s-c);
printf("area=%2f",sqrt(k));
}

