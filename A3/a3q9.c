/***9. Write a program to accept two numbers and find its GCD (greatest common divisor) using
Euclidean algorithm. The following example explains the algorithm. GCD of 123 and 36 is 3
123 % 36 = 15
36 % 15 = 6
15 % 6 = 3
6 % 3 = 0
GCD = 3
Input:
no1: 123
no2:36
Output:
123 % 36 = 15
36 % 15 = 6
15 % 6 = 3
GCD of 123 and 36 is 3****/

#include<stdio.h>
int main(){
int n1,n2;
scanf("%d%d",&n1,&n2);

int rem=0;
while(n2!=0){
rem=n1%n2;
n1=n2;
n2=rem;
}
int gcd=n1;
printf("%d is gcd",gcd);
return 0;
}

